#include <iostream>
using namespace std;

class Rstack {
    char* ptr;   // Dynamic array to store stack elements
    int top;     // Index of the top element in the stack
    int size;    // Maximum size of the stack

public:
    // Constructor
    Rstack(int size) {
        this->size = size;
        top = -1;
        ptr = new char[size];
    }

    // Destructor to release dynamically allocated memory
    ~Rstack() {
        delete[] ptr;
    }

    // Check if stack is full
    bool isFull() {
        return top == size - 1;
    }

    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }

    // Push an element onto the stack
    void push(char ele) {
        if (isFull()) {
            cout << "\nStack is Full! Cannot Push " << ele << endl;
            return;
        }
        ptr[++top] = ele;
    }

    // Pop an element from the stack
    char pop() {
        if (isEmpty()) {
            cout << "\nStack is Empty! Cannot Pop.\n";
            return '\0'; // Return null character if stack is empty
        }
        return ptr[top--];
    }

    string revString(string input) {
    // Push characters of the string onto the stack
    for (int i = 0; i < input.length(); i++) {
        push(input[i]);
    }

    // Pop characters from the stack to form the reversed string
    string reversed = "";
    for (int i = 0; i < input.length(); i++) {
        reversed += pop();
    }

    return reversed;
}

    // Display stack elements
    void display() {
        if (isEmpty()) {
            cout << "\nStack is Empty! Nothing to Display.\n";
            return;
        }
        cout << "\nElements in Stack:\n";
        for (int i = top; i >= 0; i--) {
            cout << "|| " << ptr[i] << " ||\n";
        }
    }
};

int main() {
    int size = 30; // Set stack size
    Rstack s(size);

    string input;
    cout << "Enter a string to reverse: ";
    cin >> input;

    string reversed = s.revString(input);
    cout << "\nReversed String: " << reversed << endl;

    return 0;
}

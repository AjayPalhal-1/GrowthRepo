// Write a program of card 

// Key Takeaways:
// Abstraction is about showing only the relevant details while hiding the complex internal workings.
// It promotes selective ignorance, focusing on aspects that matter in the given context.
// Through abstraction, systems become more user-friendly, flexible, and secure, aligning with modular
//  and scalable development practices.



#include<iostream>
using namespace std;


class Card
{
    long accNo;
    string pin;
    int cvv;
    int date;
    int mobNo;


    public :
     void checkBal();
     void creditAmnt();
     void debitAmnt();
     void changePass();


};


int main()
{

Card cq;
}


// Problem Description:
// Given a string, find the first non-repeating character using a map. If all characters repeat, print a suitable message.

// Input:
// A single string s.
// Output:
// The first non-repeating character or a message if all characters repeat.
// Example:
// Input:
// s = "swiss"

// Output:
// w

// Input:
// s = "aabbcc"

// Output:
// No non-repeating character found

#include<iostream>
#include<map>
using namespace std;

int main()
{
    string str = "aabbccd";

    map<char , int > strmap;

    for( char ch : str)
    {
        strmap[ch]++;
    }

    char firstchar ;

    for( auto pair : strmap)
    {
        if( pair.second == 1)
        {
            firstchar = pair.first;
            // cout<<"\nNo repeated char : " <<pair.first;
            break;
        }
       

    }

        if (firstchar != '\0') {
        cout << "First non-repeating character: " << firstchar << endl;
    } else {
        cout << "No non-repeating character found" << endl;
    }
    cout<<"\n\n";
}

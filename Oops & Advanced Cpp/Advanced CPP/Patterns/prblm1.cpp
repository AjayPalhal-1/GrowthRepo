// 1. Solid Rectangle
// Problem: Print a solid rectangle of rows and columns.

// Example: For rows = 4 and columns = 5:

// markdown
// Copy code
// *****
// *****
// *****
// *****






#include<iostream>
using namespace std;

int main()
{
    for (int i=0; i<4;i++)
    {
        for(int j=0;j<5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
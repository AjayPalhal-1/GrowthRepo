// 1. Solid Rectangle
// Problem: Print a solid rectangle of rows and columns.

// Example: For rows = 4 and columns = 5:

// markdown
// Copy code
// *****
// *****
// *****
// *****


//     1
//    1 2
//   1 2 3
//  1 2 3 4




#include<iostream>
using namespace std;

int main()
{
    for (int i=0; i<=5;i++)
    {
        for(int k=0;k<=4-i;k++)
        {
            cout<<" ";
        }
        for(int j=1;j<i;j++)
        {
            cout<<" "<<j;
        }
        cout<<endl;
    }
}
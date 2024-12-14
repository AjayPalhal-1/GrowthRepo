// 2. Hollow Rectangle
// Problem: Print a hollow rectangle of rows and columns.

// Example: For rows = 4 and columns = 5:

// * * * * * 
// *       * 
// *       * 
// * * * * *


#include<iostream>
using namespace std;

int main()
{
    for (int i=0; i<4;i++)
    {
        for(int j=0; j<5;j++)
        {
            if(i== 0 || j==0 || i==3 || j==4)
            cout<<"* ";
            else 
            cout<<"  ";
        }
        cout<<endl;
    }
}
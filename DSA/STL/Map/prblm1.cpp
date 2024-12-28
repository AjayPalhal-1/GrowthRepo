
// Problem: Frequency of Elements in an Array
// Description:
// Given an array of integers, find the frequency of each element using a map.

// Input:
// An integer n, representing the size of the array.
// An array of n integers.
// Output:
// Print each unique element along with its frequency.
// Example:
// Input:

// makefile
// Copy code
// n = 6  
// // arr = [1, 2, 2, 3, 3, 3]

// Output:


// 1 -> 1  
// 2 -> 2  
// 3 -> 3



#include<map>
#include<iostream>
using namespace std;


int main()
{
    map<int , int > mymap = {{1,1},{2,2},{3,2},{4,3},{5,3}};
    int count =1;
    int  i =  mymap.begin()->second;
    for (i ; i < mymap.size(); i++)
    {
        for (int j = i+1 ; j < mymap.size(); j++)
        {
          if(mymap.at( i) == mymap.at(j))
          {
             count++;
             break;

          }
        }  
            cout<<mymap.at(i) <<"  Present " <<count << " :  Times \n";
     
        
    }

    
}
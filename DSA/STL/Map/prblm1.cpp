
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

#include <map>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Input Array
    vector<int> arr = {1, 2, 2, 3, 3, 3};
    
    // Declare map to store frequency
    map<int, int> freq_map;

    for (int num : arr) {
        freq_map[num]++;  // only unique valus storing and if no repete then vaules : updated to find occurance of no.
    }

    cout << "Element -> Frequency" << endl;
    for (const auto& pair : freq_map) {
        cout << pair.first << " -> " << pair.second << endl;
    }

    return 0;
}


// #include<map>
// #include<iostream>
// using namespace std;


// int main()
// {
//     map<int , int > mymap = {{1,1},{2,2},{3,2},{4,3},{5,3}};
//     int count =1;
//     int  i =  mymap.begin()->second;
//     for (i ; i < mymap.size(); i++)
//     {
//         for (int j = i+1 ; j < mymap.size(); j++)
//         {
//           if(mymap.at( i) == mymap.at(j))
//           {
//              count++;
//              break;

//           }
//         }  
//             cout<<mymap.at(i) <<"  Present " <<count << " :  Times \n";
     
        
//     }

    
// }
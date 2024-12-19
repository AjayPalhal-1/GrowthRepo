// 1. Create and Display an Array
// Problem: Create an std::array of integers and initialize it with 5 elements. Display all the elements using a loop.
// Functions to explore:
// .size()
// .at(index)


//  ans Fun1 

// 2. Sum of Elements
// Problem: Calculate the sum of all elements in an std::array of integers.
// Functions to explore:
// .begin()
// .end()

// ans fun2








#include<array>
#include<iostream>
using namespace std;

void func1( array <int ,5> arr)
{
    for(int i=0; i< arr.size();i++)
    {
        
        cout<<arr.at(i)<<" ";
    }

}

void func2( array <int ,5> arr)
{
    for(int i=0; i< arr.size();i++)
    {
        cout<<arr.at(i)<<" ";
    }

}


int main()
{
    array <int ,5> arr ={1,2,3,4,4};
    func1(arr);

    

}



// 1. Basic Binary Search
// Write a function to implement binary search for a given sorted array. 
//  Return the index of the target value if found, or -1 if not.

// Input: arr = [1, 3, 5, 7, 9, 11], target = 5  
// Output: 2  


// Solutions 


#include<iostream>
using namespace std;


int main ()
{
    int size =6;
    int target = 5;

    int arr [size]={1,3,5,7,9,11};

    int start = 0;
    int end = size-1;

    for (int i=0; i<size;i++)
    {
        int mid = (start +end)/2;

        if(target < arr[mid])
        {
            end = mid -1;
        }
        else if ( target> arr[mid])
        {
            start = mid +1;
        }
        else if(target==arr[mid])
        {
            cout<< "Element Founf At "<<mid<<" Index";
            return 0;

        }


    }
}

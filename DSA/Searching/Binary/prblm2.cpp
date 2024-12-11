// 2. First and Last Position of an Element
// Find the first and last occurrence of a target element in a sorted array.

// Example:

// Copy code
// Input: arr = [2, 4, 4, 4, 6, 8], target = 4  
// Output: [1, 3]  


#include<iostream>

using namespace std;


int main()

{
    int  arr[6] = {2, 4, 4, 4, 6, 8};
    int  target = 4;  
    int start = 0;
    int end = 5;

    for (int i =0;i<6;i++)
    {
        int mid = (start +end)/2;

        if(target <=arr[mid] )
        {
            cout << mid <<"  \n\n" ;

            end = mid-1;
            
            
        }

        else if(target >= arr[mid])
        {
            cout << mid <<"  \n\n" ;

            start = mid +1;
        }

        // else  if(target == arr[mid])
        // {
        //     cout << mid <<"\n\n";
        //     return 0;

        // }
    }

    
}

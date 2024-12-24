




#include<iostream>
#include<array>

using namespace std;


void findMaxMin(array <int, 5> arr )
{
      int min=arr.at(0);
      int  max = arr.at(0);
    for(int i=0;i<arr.size();i++)
    {
     

      if(min> arr.at(i))
      {
        min=arr.at(i);
      }

      if(max <  arr.at(i))
      {
        max=arr.at(i);
      }      



      
    }
            cout<<"Minimum Element Is  : "<<min;

            cout<<"\nMaximum  Element Is  : "<<max;



}

int main()
{
    array <int ,5> arr = {1,2,3,4,5};
    array <int ,5 > brr ={6,7,8,9,10};

   // findMaxMin(arr);
    arr.swap(brr);

    cout<<"\nLast Element : "<<arr.back();
    cout<<"\nFirst Element : "<<*arr.begin();
    cout<<"\nArray Size  :"<<arr.size();
    cout<<"\nArray Data 1st Element : "<<* arr.data();
    cout<<"\nArray End Element :"<<arr.end()-1;
    cout<<"\nArray MAx Size : "<<arr.max_size();

    

    // cout<<"\narr = ";
    // for (int i=0;i< 5 ;i++)
    // {
    //   cout<<arr.at(i)<<" "; 
    // 
    
    
    // cout<<"\nbrr = ";

    // for (int i=0;i< 5 ;i++)
    // {
    //   cout<<brr.at(i)<<" "; 
    // }
}
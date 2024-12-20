




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
            cout<<"Minimum Element Is "<<min;

            cout<<"\nMaximum  Element Is "<<max;



}

int main()
{
    array <int ,5> arr = {1,2,3,4,5};
    findMaxMin(arr);
}
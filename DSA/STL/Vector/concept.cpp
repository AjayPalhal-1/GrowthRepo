
#include<vector>
#include<iostream>
using namespace std;


int main()
{
    vector <int> vec = {1,2,3,4,5};
    cout<<vec.at(0);
    vec.push_back(25);
    // cout<<vec.end()-1;

    cout<<"\nVectors Element :  ";

    // for(int i =0;  i<vec.size();i++)
    // {
    //     cout<<vec.at(i)<<"   " ;
    // }

    for (int val : vec) {
    cout << val << " ";
}


    cout<<"\nVector Capacity :  "<< vec.capacity();



}
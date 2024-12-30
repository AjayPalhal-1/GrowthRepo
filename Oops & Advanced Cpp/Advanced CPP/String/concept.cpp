#include<string>
#include<iostream>

using namespace std;


int main()
{
    string str = "AJAY";
    string str1= "Palhal";
    string str2 = str + " " + str1;

    cout<<"length of String : "<<str.length();
    cout<<"\nString After Concating : " <<str2;
    
    // cout<<"\n"<< str.clear();
}
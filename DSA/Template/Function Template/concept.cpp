

#include<iostream>

using namespace std;

template <class T>

T add (T a, T b)
{
    return a+b;
}

int main()
{
    cout<<add(10,22)<<endl;
    cout<<add(10.23,34.44);

}

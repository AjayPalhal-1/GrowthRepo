#include<map>

#include<iostream>
using namespace std;

int main()
{
    map<int , string> mymap= {{1,"AJAY"},{2,"PK"},{3, "AP"},{4,"BM"},{5,"amol"}};
 
     cout << "1st Pair At Key 1 : " << mymap.begin()->first << " -> " << mymap.begin()->second;

     cout<<"\n\n\n";

     cout<<mymap[5];

    // cout<<"1 st Element At 1 Key "<<*mymap.begin();

    cout<<"\n\nSize OF MAP : "<<mymap.size();

  


    auto last = --mymap.end(); // Iterator to the last element

    cout<<"\n\nValue At mymap.end() : "<<&last;     




    cout<<"\n\nLast  Pairs OF MAP : "<<last->first<< " -> " <<last->second;


     
     cout<<"\n\n\n";

}
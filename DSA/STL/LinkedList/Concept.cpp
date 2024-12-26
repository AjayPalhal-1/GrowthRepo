
#include<list>
#include<iostream>

using namespace std;

 void display(list <int > mylist)
 {
  for(int val : mylist)
    {
      cout<< val <<"  ";
    }


 }



int main()
{

  list<int >  mylist={1,2,3,4,5};

  cout<<"First Element In List   : "<<*mylist.begin();
   cout<<"\nLast Element In List :"<<mylist.back();
   cout<<"\nMaximum Size of  List : "<<mylist.max_size();


   int next = *mylist.begin();
   cout<<"\nSecond Element List : "<<++next;
      cout<<"\nback()  :"<<mylist.back();
      cout<<"\nend()   : "<<*mylist.end();

  //  cout<<"\nSecond Last Element List : "<<--(mylist.back());

   auto last = mylist.end();
   --last;
   

    mylist.insert((last),55);

   cout <<"\n\nList Element ";
    display(mylist);



    cout<<"\n\nList Is Empty Or Not 1 -> yes 0 -> No : "<<mylist.empty();

    mylist.pop_back();
    cout <<"\n\nList Element  After Poped Last Elem : ";
    display(mylist);

    

      cout <<"\n\nList Element  After Add Elem  at  Front : ";
      mylist.push_front(100);
      display(mylist);


      cout <<"\n\nList Element  After Sorting : ";
      mylist.sort();
      display(mylist);






   cout<<"\n\n\n\n";



   

//   cout<<"First Element In List "<<*mylist.begin();




}
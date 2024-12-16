
#include<iostream>
using namespace std;


class Mstack
{
    int * ptr;
    int size ;
    int top;

    public :

    Mstack(int size)
    {
        this->size= size;
        this->ptr = new int [size];
        this->top = -1;

    }

   bool isFull()
    {
        if(top==size-1)
        {
            cout<<"\n Stack Is Full\n";
            return true ;
        }
        return false;

    }

    bool isEmpty()
    {
        if(top==-1)
        {
            cout<<"\nStack Is Empty\n";
            return true;
        }
        return false ;
    }

    bool push( int ele)
    {
        if(isFull())
        {
            cout<<"\n You Can Not Insert Element\n";
            return false ;
        }

        ptr[++top]= ele;
        return true;
        

    }

    bool pop( )
    {
        if(isEmpty())
        {
            cout<<"\n You Cant Remove Element\n";
            return false ;
        }
        int ele =ptr[top--];

        cout<<"Poped Element : "<< ele ;
        return true ;
    }

    void display()
    {
        if(isEmpty())
        {
            cout<<"\nYou Can Not Display Element\n";
            return;
        }
        cout<<"Elememt In Stack Is \n";
        for(int i= top ; i>=0;i--)
        {
            cout<<"\n || "<<ptr[i]<<" || \n";
        }
    }
};


int main()
{
    cout<<"Enter The Size Of Stack\n";
    int top,size,ch;
    cin>>size;

    Mstack stk(size);
   
    

    do
    {
        cout<<"::------Menu-------::\n"
        <<"Enter Your Choise\n"
        <<"Insert Ele : 1 \n"
        <<"Delete Ele : 2 \n"
        <<"Display Ele : 3 \n"
        <<"For Check Full : 4 \n"
        <<"For CHeck Empty : 5 \n";
        cin>>ch;

        switch (ch)
        {
        case 1 :
        cout<<"Enter Element To Store\n";
        int ele;
        cin>>ele;
        stk.push(ele);         
        break;

        case 2 :
        stk.pop();
        break;

        case 3:
        stk.display();
        break;

        case 4:
        stk.isFull();
        break;

        case 5:
        stk.isEmpty();
        break;

        }
        
    } while (ch!=5);
    

}
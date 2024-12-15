#include<iostream>
using namespace std ;


class MyStack
{
   int size ;
   int top ;
   int * ptr;

   public :

   MyStack(int s);

   bool isFull();
   bool isEmpty();
   bool push(int ele);
   bool pop(int& ele);
   int  peek();
   void display();

   
   
   
 };






MyStack::MyStack(int size )
{
    this->size= size;
    this->top=-1;
    this->ptr = new int [size];

}

bool MyStack::isEmpty()
{
    if(top==-1)
    {
     cout<<endl<<"Stack Is Empty "<<endl;
     return true;
    }

    return false;
    
}

bool MyStack::isFull()
{
    if(top==size-1)
    {
      cout<<endl<<"Stack Is Full  "<<endl;
      return true;        
    }
    return false ;
}

bool MyStack::push(int ele )
{
    if(isFull())
    {
        return false;
    }
    ptr[++top]= ele;
    return true;
    
}

bool MyStack::pop(int& ele)
{
    if(isEmpty())
    {
        return false;
        
    }
    // cout<<endl<<"Poped Element Is : "<<
    ele = ptr[top--];
    return true;


}

int MyStack::peek()
{
    return ptr[top];
}

void MyStack::display()
{
    if(isEmpty())
    {
        cout<<endl<<"Can't  Display Element Coz Stack Is Empty Vroo";
        return ;
    }
    cout<<"::: Display Output :::";
    for(int i=0; i<size;i++)
    {
        cout<<endl<<ptr[i]<<"  ";
    }
}




int main()
{

    MyStack stk (5);
    int ch,elm;
    cout<<"\nEnter Your Choise \n";
    

    do
    {
        cout<<endl<<":::: Menu ::::"<<endl;
        cout<<"1 : Push Element \n 2 : POP Element \n 3 : IsFull \n 4 : IsEmpty \n 5 : For Peek \n 6 : For Display \n 7 : Exit \n"<<endl;
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"\n Enter Element \n";
            cin>>elm;
            stk.push(elm);                       
            break;

            case 2:
            stk.pop(elm);
            cout<<"\n Pooped Elements \n"<<elm<<endl;                        
            break;

            case 3:
            stk.isEmpty();            
            break;

            case 4:
            stk.isEmpty();            
            break;

            case 5:
            cout<<endl<<stk.peek();            
            break;

            case 6:
            stk.display();            
            break;         
       
        }
    } while (ch!=7);

    
}
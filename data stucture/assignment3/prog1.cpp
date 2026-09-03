#include<iostream>
using namespace std;

class stack
{
    int a[5];
    int top;

public:

    stack()
    {
        top=-1;
    }

    void push()
    {
        int x;

        if(top==4)
        {
            cout<<"Stack is full"<<endl;
        }
        else
        {
            cout<<"Enter element: ";
            cin>>x;
            top++;
            a[top]=x;
        }
    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Stack is empty"<<endl;
        }
        else
        {
            cout<<"Deleted element: "<<a[top]<<endl;
            top--;
        }
    }

    void isEmpty()
    {
        if(top==-1)
            cout<<"Stack is empty"<<endl;
        else
            cout<<"Stack is not empty"<<endl;
    }

    void isFull()
    {
        if(top==4)
            cout<<"Stack is full"<<endl;
        else
            cout<<"Stack is not full"<<endl;
    }
    void display()
    {
        if(top==-1)
        {
            cout<<"stack is empty"<<endl;
        }
        else
        {}
            
    }
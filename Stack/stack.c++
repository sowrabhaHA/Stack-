//Author : Chandan Kumar .M
//Date : 01/04/2020
//email : mckchandan1999@gmail.com
// Topic : Implementing stack operation in c++

#include<iostream>
#include<bits/stdc++.h>
#define max 10
using namespace std;
int top=-1,choice,element,a[max];
int main()
{
void push(int);
void pop();
void peek();
void isempty();
void isfull();
cout<<"Enter the Option\n1.Push\n2.Pop\n3.Peek\n4.Isempty\n5.IsFull\n6.Exit\n";




do{
cin>>choice;
switch(choice)
{
case 1:cout<<"Enter the Element :";
cin>>element;
push(element);
break;
case 2:cout<<"Popped the Element :";
pop();
break;
case 3:cout<<"The Top most Element is:";
peek();
break;
case 4:isempty();
break;
case 5:isfull();
break;
}
}while(choice!=6);
return 0;
}

void push(int element)
{
if(top == max -1 )
{
cout<<"Stack is full\n";
return ;
}
else
{
a[++top]=element;
cout<<"Pushed Successfully\n";
}
}
void pop()
{
int x;
if(top == -1)
{
cout<<"Stack is empty\n";
return;
}
else
{
x=a[top];
cout<<x<<"\n";
top--;
}
}
void peek()
{
if(top == -1)
{
cout<<"Stack is empty\n";
return;
}
cout<<a[top]<<"\n";
}
void isempty()
{
if(top == -1)
{
cout<<"Stack is empty\n";
return;
}
cout<<"Not empty\n";
}
void isfull()
{
if(top == -1)
{
cout<<"Stack is FULL\n";
return;
}
cout<<"Not Full\n";
}




#include <iostream>
#include<stdlib.h>

using namespace std;
struct node
{
    int data;
    node *next;
};

class stack
{
    node *top;
    public:
    stack()
    {
        top=NULL;
    }
    
    void push();
    void pop();
    void show();
};
void stack::push()
{
    int value;
    node *n1=new node();
    cout<<"enter the elements:";
    cin>>value;
    n1->data=value;
    n1->next=NULL;
    if(top!=NULL)
    {
        n1->next=top;
    }
    top=n1;
    cout<<"item inserted :)"<<endl;
}
void stack::pop()
{
    node *temp;
    int value;
    
    if(top==NULL)
    {
        cout<<"khali hath :)"<<endl;
    }
    temp=top;
    value=top->data;
    top=top->next;
    free(temp);
    cout<<"element popped out:"<<value<<endl;
}
void stack::show()
{
  node *temp;
  temp=top;
  cout<<"list is:"<<endl;
  while(temp!=NULL)
  {
      cout<<temp->data<<"->";
      temp=temp->next;
  }
}

int main()
{
  stack s1;
  int ch;
  while(1)
  {
  cout<<"enter your choice:"<<endl;
  cout<<"1. push"<<endl;
  cout<<"2 pop"<<endl;
  cout<<"3 show"<<endl;
  cout<<"4 exit"<<endl;
  cin>>ch;
  switch(ch)
  {
  case 1:s1.push();
  break;
  case 2:s1.pop();
  break;
  case 3:s1.show();
  break;
  case 4:cout<<"exiting..its boring"<<endl;
  exit(1);
  break;
  default:cout<<"kripaya option dhyann s dekhe:P"<<endl;
   return 0;
}
}
}


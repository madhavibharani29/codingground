#include <iostream>
#include<stdlib.h>

using namespace std;
struct node
{
    int data;
    node *next;
};
class link
{
    node *head;
    public:
    link()
    {
        head=NULL;
    }
    void create();
    void display();
   void insert_begin();
   void insert_end();
   void insert_between();
   void delete_begin();
   void delete_end();
   void delete_between();
};
void link::delete_between()
{
    int value;
    cout<<"enter value after which node has to be deleted:";
    cin>>value;
    node *temp;
    node *prev;
    temp=head;
    while(temp->data!=value)
    {
        temp=temp->next;
    }
    prev=temp;
    temp=temp->next;
    prev=temp->next;
    delete(temp);
    
}
void link:: delete_end()
{
    node *temp;
    node *prev;
    temp=head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
        
    }
    prev=temp;
    temp=temp->next;
    cout<<temp->data;
    prev->next=NULL;
    free(temp);
    cout<<"last element in linked list deleted";
}

void link::delete_begin()
{
    node *temp;
    temp=head;
    head=head->next;
    free(temp);
    cout<<"first element in the list is deleted";
}
void link::insert_between()
{
    int value;
    int data;
    cout<<"enter the value after which you want to insert new node:"<<endl;
    cin>>data;
    cout<<"enter the value to be inserted:"<<endl;
    cin>>value;
    node *temp;
    temp=head;
    //cout<<temp->data;
    node *n1=new node();
    n1->data=value;
    while(temp->data!=data)
    {
        temp=temp->next;
    }
    n1->next=temp->next;
    temp->next=n1;
}
void link::insert_begin()
{
    int value;
    cout<<"enter the value to be inserted"<<endl;
    cin>>value;
    node *n1=new node();
    n1->data=value;
    n1->next=head;
    head=n1;
    cout<<"value inserted\n";
}
void link::insert_end()
{
    int value;
    cout<<"enter the value to be inserted at the end:"<<endl;
    cin>>value;
    node *n1=new node();
     n1->data=value;
     n1->next=NULL;
    node *temp;
    temp=head;
    while(temp->next!=NULL)
    {
     temp=temp->next;   
    }
    temp->next=n1;
}
void link::create()
{
    int info;
    node *n1;
    node *last;
    last=n1;
    while(1)
    {
    cout<<"\n press -7 to exit"<<endl;
    cout<<"\nenter data to be stored:"<<endl;
    cin>>info;
    if (info==-7)
    break;
    else
    {
    n1=new node();
    
    n1->data=info;
    //cout<<"value"<<n1->data;
    if(head==NULL)
    head=n1;
    else 
        last->next=n1;
        last=n1;
        last->next=NULL;
    }
    }
}
void link::display()
{
  node *temp=head;
  while(temp!=NULL)
  {
  cout<<temp->data;
  if(temp->next!=NULL)
  cout<<"->";
  temp=temp->next;
  }
 delete(temp);
}


int main()
{
   link l1;
   char ch;
   while(1)
   {
   cout<<"\nenter your choice 1.create  2.insert_beginning  3.insert_end  4.insert_between   5.display   6.exit 7.delete_begin  8.delete_end 9.delete_between"<<endl;
   cin>>ch;
   switch(ch)
   {
       case '1':l1.create();
       break;
       case '2':l1.insert_begin();
       break;
       case '3':l1.insert_end();
       break;
       case '4':l1.insert_between();
       break;
       case '5':l1.display();
       break;
       case '6':cout<<"exiting"<<endl;
       exit(1);
       break;
       case '7':l1.delete_begin();
       break;
       case '8':l1.delete_end();
       break;
       case '9':l1.delete_between();
       break;
       default:cout<<"wrong choice";
       
   }
   }
  
   return 0;
}



#include <iostream>

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
};
void link::create()
{
    int info;
    node *n1;
    node *last;
    last=n1;
    while(1)
    {
    cout<<"\n press -7 to exit";
    cout<<"\nenter data to be stored:";
    cin>>info;
    if (info==-7)
    break;
    else
    {
    n1=new node();
    
    n1->data=info;
    cout<<"value"<<n1->data;
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
   l1.create();
   l1.display();
   return 0;
}


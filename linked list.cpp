#include<iostream>
using namespace std;
class node
{
public:
    int data;
    node* next;

};
void linkedlisttraversal(node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}




int main()
{
    node*head;
    node*second;
    node*third;
    node*fourth;

    head=new node();
    second=new node();
    third=new node();
    fourth=new node();
     head->data=1;
     head->next= second;

     second->data=2;
     second->next= third;

     third->data=3;
     third->next=fourth;

     fourth->data=4;
     fourth->next=NULL;

     linkedlisttraversal(head);
}



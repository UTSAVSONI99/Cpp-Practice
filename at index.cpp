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
   struct node*atanyindex(struct node*head,int data,int index)
   {
       struct node*ptr=(struct node*)malloc(sizeof(struct node));
       struct node*p=head;
       int i=0;
       while(i!=index-1)
       {
           p=p->next;
           i++;
       }
        ptr->next=p->next;
        ptr->data=data;
        p->next=ptr;
        return head;

   };




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

     head = atanyindex(head,20,2);
     linkedlisttraversal(head);

}



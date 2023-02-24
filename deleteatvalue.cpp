#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;

};

void linkedlisttraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data;
        ptr=ptr->next;
    }
}
 struct node*deleteatvalue(struct node*head,int value)
 {
     struct node*p=head;
     struct node*q=p->next;
     while(q->data!=value && q->next!=NULL)
     {
        p=p->next;
        q=q->next;
     }
     if(q->data==value)
     {
       p->next=q->next;
       free(q);
     }
       return head;
 }
             



int main()
{
   struct node*head;
   struct node*second;
   struct node*third;
   struct node* fourth;

   head = (struct node*)malloc(sizeof(struct node));
  second= (struct node*)malloc(sizeof(struct node));
  third = (struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
     head->data=1;
     head->next= second;

     second->data=2;
     second->next= third;

     third->data=3;
     third->next=fourth;

     fourth->data=4;
     fourth->next=NULL;


      head=deleteatvalue(head,5);
     linkedlisttraversal(head);
}
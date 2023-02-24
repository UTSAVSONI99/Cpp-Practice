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
 struct node*deletebwnode(struct node*head, int index)
 {
     struct node*p=head;
     int i=1;
     while(i!=index-1)
     {
        p=p->next;
        i++;
     }
      struct node*q=p->next;
      p->next=q->next;
      free(q);
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


      head=deletebwnode(head,3);
     linkedlisttraversal(head);
}
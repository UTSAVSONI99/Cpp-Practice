#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;

};

void linkedlisttraversal(struct node*head)
{
    struct node*ptr=head;
    do{
        cout<<ptr->data;
        ptr=ptr->next;

    }while(ptr!=head);
}
struct node*insertatend(struct node*head,int data)
{
    
   struct node*ptr = (struct node*)malloc(sizeof(struct node));
   ptr->data=data;
   struct node*p=head;
   while(p->next!=head)
   {
    p=p->next;
   }
    p->next=ptr;
    ptr->next=head;
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
     fourth->next=head;


     head=insertatend(head,10);
     linkedlisttraversal(head);
}


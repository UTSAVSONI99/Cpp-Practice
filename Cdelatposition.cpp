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
struct node*deleteatpos(struct node*head,int index)
{
    struct node*q=head->next;
    struct node*p=head;
    int i=1;
    while(i!=index-1)   
    {
        p=p->next;
        q=q->next;
        i++;
    }
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
     fourth->next=head;


     head=deleteatpos(head,3);
     linkedlisttraversal(head);
}


#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
    struct node*prev;

};

void linkedlisttraversal(struct node*N1)
{
   struct node*ptr=N1;
  while(ptr->next!=NULL)
  {
     cout<<ptr->data;
     ptr=ptr->next;
  }
   cout<<ptr->data<<endl;
}
    
   void backward(struct node*N4)
    {
      struct node*ptr=N4;
       while(ptr->prev!=NULL)
       {
         cout<<ptr->data;
         ptr=ptr->prev;
       }
         cout<<ptr->data;
    }
    
     struct node*insertatfirst(struct node*N1,int data)
     {
        struct node*p=(struct node*)malloc(sizeof(struct node));
        p->data=data;
        p->next=N1;
        p->prev=NULL;
        N1->prev=p;
        return p;

     }
             



int main()
{
   struct node*N1;
   struct node*N2;
   struct node*N3;
   struct node*N4;

   N1 = (struct node*)malloc(sizeof(struct node));
   N2= (struct node*)malloc(sizeof(struct node));
   N3 = (struct node*)malloc(sizeof(struct node));
   N4=(struct node*)malloc(sizeof(struct node));
     N1->data=1;
     N1->prev=NULL;
     N1->next= N2;

     N2->data=2;
     N2->prev=N1;
     N2->next= N3;

     N3->data=3;
     N3->prev=N2;
     N3->next=N4;

     N4->data=4;
     N4->prev=N3;
     N4->next=NULL;


     N1=insertatfirst(N1,9);
     linkedlisttraversal(N1);
     backward(N4);
}


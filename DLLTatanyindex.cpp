#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node*next;
    struct node*prev;

};

struct node* linkedlisttraversal(struct node*N1)
{
   struct node*ptr=N1;
  while(ptr->next!=NULL)
  {
     cout<<ptr->data;
     ptr=ptr->next;
  }
   cout<<ptr->data<<endl;
   return ptr;
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
    
     struct node*insertatend(struct node*N1,int index,int data)
     {
        struct node*p=(struct node*)malloc(sizeof(struct node));
        struct node*ptr=N1;
        int i=1;
        while(i!=index)
        {
            ptr=ptr->next;
            i++;
        }
        ptr->next->prev=p;
        p->next=ptr->next;
        ptr->next=p;
       
        p->data=data;
        p->prev=ptr;
        
        return N1;

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


     N1=insertatend(N1,2,99);
    N4= linkedlisttraversal(N1);
     backward(N4);
}


# include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};
    struct node*top=NULL;
void linkedlisttraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<endl;
        ptr=ptr->next;
    }
}
  int isempty(struct node*top)
  {
    if(top== NULL)
    {
        return 1;
    }
    else
    { 
        return 0;
    }
  };
    int isfull(struct node*top)
    {
        struct node*p=(struct node*)malloc(sizeof(struct node));
        if(p==NULL)
        {
            return 1;
        }
        else{
            free(p);
            return 0;
        }
    }
  
 
struct node*push(struct node* top,int x) 
{
     if(isfull(top))
     {
         cout<<"stack overflow";
        
     }
     else{
        struct node*n=(struct node*)malloc(sizeof(struct node));
        n->data=x;
        n->next=top;
        top=n;
        return top;
     }
     return NULL;
}
    int pop(struct node*ptr)
    {
        if(isempty(ptr))
        {
            cout<<"stack underflow";
        }
          else{
            struct node*n=ptr;
            top=ptr->next;
           int x=n->data;
            free(n);
            return x;
          }
          return 8;
    }
int main()
    { 
       
        top=push(top,78);
        top=push(top,21);
        top=push(top,30);
        int y=pop(top);
        cout<<"popped element is"<<y<<endl;

     
        linkedlisttraversal(top);
          return 0;
    }  


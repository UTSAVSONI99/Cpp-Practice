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
   int stackbottomost(struct node*n)
      {
        struct node*ptr=n;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            
        }
         
         return ptr->data;
      }

     int stacktopmost(struct node*top)
     {
        return top->data;
     }
     
    
int main()
    { 
       
        top=push(top,78);
        top=push(top,21);
        top=push(top,30);
        cout<<"stack toppest element"<<stacktopmost(top);
        cout<<"stack ground value"<<stackbottomost(top);
        
        
       // linkedlisttraversal(top);
          return 0;
    }  


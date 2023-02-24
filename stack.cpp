# include<iostream>
using namespace std;

 struct stack{
    int size;
    int top;
    int * arr;
 };

  int isempty(struct stack*ptr)
  {
    if(ptr->top==-1)
    {
    return 1;
    }
    
    return 0;
    
  }

   int isfull(struct stack*ptr)
   {
    if(ptr->top==ptr->size-1)
    {
    return 1;
    }

    return 0;

   }
  
 int main()
 {
    struct stack *s;
    
    s->size=3;
    s->top=-1;
    s->arr= (int*)malloc(s->size*sizeof(int));
        

    s->arr[0]=20;
    s->top++;
    s->arr[1]=30;
    s->top++;
    
    

   
     
    if(isempty(s))
    {
    cout<<"stack is khali";
    }
    else
    {

    cout<<"stack is not khali"; 
    }
      if(isfull(s))
      {
        cout<<"stack is full";
      }
      else 
      {
        cout<<"stack is not full";
      }

    
    
     return 0;

 } 
 


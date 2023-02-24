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
    void push(struct stack*ptr,int val)
   {
      if(isfull(ptr))
      {
        cout<<"stack overflow"<<endl;
      }
       else{
        ptr->top++;
        ptr->arr[ptr->top]=val;
       }
   }
  
 int main()
 {
    struct stack *s =(struct stack*)malloc(sizeof(struct stack));
    
    s->size=5;
    s->top=-1;
    s->arr= (int*)malloc(s->size*sizeof(int));
    push(s,9);
    push(s,8);
    push(s,7);
    push(s,6);
    push(s,5);
    
    push(s,5);


    cout<<isempty(s);
    cout<<isfull(s);
        


    
    
     return 0;

 } 
 


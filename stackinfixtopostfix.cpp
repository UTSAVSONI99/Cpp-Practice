# include<iostream>
using namespace std;

 struct stack{
    int size;
    int top;
    char* arr;
 };
 int stackTop(struct stack* s){
    return s->arr[s->top];
 }
  

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
   char pop(struct stack*ptr)
     {
        if(isempty(ptr))
        {
            cout<<"stack underflow"<<endl;
            return -1;
        }
        else
        {
           char val=ptr->arr[ptr->top];
           ptr->top--;
           return val;
        }
     }
    char infixtopostfix(char*infix)
    {
         struct stack * s;
          s->size=50;
      s->top=-1;
      s->arr= (char*)malloc(s->size*sizeof(char));
      char*postfix=(char *) malloc((strlen(infix)+1) * sizeof(char));
      int i=0,j=0;
      while(infix[i]!='\0')
      {
        if(!isoperator(infix[i]))
         postfix[j]=infix[i];
         i++;
         j++;
         else if(precedence(infix[i])>precedence(stacktop(s)))
         {
            push(s,infix[i]);
            i++;
         }

      }
      
    }
  
 int main()
 {
    char infix[]= ""x-y/z-k*d";"
    
    cout<<"postfix expression is"<<infixtopostfix(infix);







  
 } 
 


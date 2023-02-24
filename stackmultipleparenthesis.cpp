# include<iostream>
using namespace std;

 struct stack{
    int size;
    int top;
    char* arr;
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
      int match(char a,char b)
      {
         if(a=='{' && b=='}'){
        return 1;
    }
         if(a=='(' && b==')'){
        return 1;
    }
         if(a=='[' && b==']'){
        return 1;
    }
       return 0;
      }
   int parenthesismatch(char*exp)
   {
      struct stack *s;
      s->size=50;
      s->top=-1;
      s->arr= (char*)malloc(s->size*sizeof(char));
      char popped_ch;
      for (int i = 0; exp[i]!='\0'; i++)
      {
        if(exp[i]=='(' || exp[i]=='{' || exp[i]=='[')
        {
            push(s,'(');
        }
           else if(exp[i]==')'|| exp[i]=='}' || exp[i]==']')
         {
           if(pop(s)==-1)
           return 0;
         }
         else if(popped_ch=pop(s))
         {
            if(!match(popped_ch,exp[i]))
            return 0;
         }
            
         
        

         
      }
       if(isempty(s)){
            return 1;
         }
         else{
            return 0;
         }
   }
  
 int main()
 {
    char exp[]= "[[4-6]((8){(9-8])})";






   if (parenthesismatch(exp))
   {
      cout<<" parenthesis is balanced";

   }
    else
    {
         cout<<" parenthesis is not  balanced";
    }    
     return 0;

 } 
 


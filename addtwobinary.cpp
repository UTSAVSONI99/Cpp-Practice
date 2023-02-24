
#include <iostream>

using namespace std;

 string addtwobinary(int a,int b,int c)
 {
     string str="";
     int x,y;
     while(a>0||b>0)
     {
          x=a%10;
          y=b%10;
          
         if((x==0&&y==0&&c==1)||(x==1&&y==0&&c==0)||(x==0&&y==1&&c==0))
         {
             str='1'+str;
             c=0;
         }
         else if((x==1&&y==1&&c==0)||(x==0&&y==1&&c==1)||(x==1&&y==0&&c==1))
         {
             str='0'+str;
             c=1;
             
         }
         else if(x==1&&y==1&&c==1)
            {
                str='1'+str;
                c=1;
            }
            else
            {
                str='0'+str;
                c=0;
            }
                
            
            a=a/10;
            b=b/10;
     }
       if(c==1)
       {
           str='1'+str;
       }
       cout<<str<<endl;
       return str;
 }

int main()
{
    
    int a,b,c=0;
    cin>>a>>b;
     cout<<addtwobinary(a,b,c);
    
}
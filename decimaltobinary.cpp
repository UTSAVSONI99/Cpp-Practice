#include <iostream>
using namespace std;
 
 int main()
 {
     string str;
     int n;
     cin>>n;
      while(n!=0)
      {
          if(n%2==0)
          str+='0';
          else
          str+='1';
          n/=2;
      }
      int s=str.size();
       int i;
       int temp;
       int j=s-1;
       for(i=0;i<=j;i++,j--)
       {
           temp=str[i];
           str[i]=str[j];
           str[j]=temp;
           
       }
       cout<<str;
 }

#include <iostream>

using namespace std;

int main()
{
   int i,n;
   cin>>n;
   int a[n];
     a[n+1]=0;
   for(i=0;i<n;i++)
   {
     cin>>a[i];
    }

    int MAX=0;
    int count=0;
    for(i=0;i<n;i++)
    {
    if(a[i]>MAX&&a[i]>a[i+1])
    {
      MAX=a[i];
      count ++;
    }

       
    }
     cout<<count;
   
 }
   
    


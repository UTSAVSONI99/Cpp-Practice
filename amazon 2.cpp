# include<bits/stdc++.h>
using namespace std;

int main()
{
     
    int i,n; 
     
    cin>>n;
    int a[n];
     for(i=0;i<n;i++)
     {
        cin>>a[i];
     }
    const int N= 100;
     bool check[N]={0};
     for(i=0;i<N;i++)
     {
        check[i]=0;
     }
   
    
    for(i=0;i<n;i++)
    {
        if(a[i]>=0)
        {
            check[a[i]]=1;
        }
    }
      int ans=-1;
     for(i=0;i<N;i++)
     {
        if(check[i]==0)
          {
            ans=i;
             break;
          }
         

     }
     cout<< ans<<endl;



}
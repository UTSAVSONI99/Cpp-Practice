#include <iostream>

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
    int ans=0;
    int pcd=a[1]-a[0];
    int curr=2;
        i=2;
          while(i<n)
          {
              if(pcd==a[i]-a[i-1])
              {
               curr++;
              }
               else
               {
                pcd=a[i]-a[i-1];
               curr=2;
               }
               ans=max(ans,curr);
               i++;
          }
          
          cout<<ans;
          
}

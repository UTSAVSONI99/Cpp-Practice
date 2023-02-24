#include <iostream>

using namespace std;

int main()
{
    int i,n;
    cin>>n;
    int a[n];
    a[n+1];
    a[n]=-1;
    
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int mx=0;
    int ans=0;
    
    for(i=0;i<n;i++)
    {
        if(a[i]>mx&& a[i]>a[i+1])
        {
            ans++;
            mx=max(mx,a[i]);
        }
    }
    cout<<ans;

    
}

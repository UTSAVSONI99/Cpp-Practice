#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    int a[n];
    int mx=-111111;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout<<mx<<endl;
    }
    
}
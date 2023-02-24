#include <iostream>
using namespace std;

int fact(int n)

{
    int i,fact=1;
    for(i=n;i>=1;i--)
    {
        fact=fact*i;
    }
    return fact;
    
} 
 int main()
 {
    int n,r;
    cin>>n>>r;
    int ans= fact(n)/(fact(r)*fact(n-r));
    cout<<ans;
    return 0;
 }
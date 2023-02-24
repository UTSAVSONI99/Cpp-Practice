#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,n,sum=0,rem;
    cin>>n;

     int t=n;
    while(n!=0)
    {
       
        rem=n%10;
        sum+=round(pow(rem,3));
         n/=10;
    }

    
    if(sum==t)
    cout<<" Armstrong";
    else
    cout<<" Not Armstrong";
}
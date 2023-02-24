#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int i,n,sum=0,rem;
    // cin>>n;
     n=153;

     int t=n;
    while(n!=0)
    {
       
        rem=n%10;
        sum+=pow(rem,3);
         n/=10;
    }

    cout<<"here"<<endl;
    cout<<n<<endl;
    cout<<sum<< " "<<t<<endl;
    if(sum==t)
    cout<<" Armstrong";
    else
    cout<<" Not Armstrong";
}
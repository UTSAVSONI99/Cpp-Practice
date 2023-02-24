#include<iostream>
using namespace std;
#include<math.h>
int main ()
{
    int x,sum,rem;
    cout<<"enter the number";
    cin>>x;
     sum=0;
     while(x!=0)
    {
     rem=x%10;
     sum=sum+rem;
     x=x/10;
     }
     cout<<sum;

}

#include <iostream>
#include<cmath>
using namespace std;

void fibonacci(int n)
{
     int i,a,b,sum;
     a=0;
     b=1;
     i=1;
    while(i<=n)
    {
        sum=a+b;
        cout<<a<<endl;
        a=b;
        b=sum;
        i++;

    }
}

int main()
{
    int n;
    cin>>n;
    fibonacci(n);
}
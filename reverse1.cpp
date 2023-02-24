#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    int i,num,n,rem,reverse=0;
    cin>>num;
    cin>>n;
    while(num!=0)
    {
        rem=num%10;
        reverse+=rem*pow(10,n);
        n--;
        num=num/10;
        
    }
    cout<< reverse;
}

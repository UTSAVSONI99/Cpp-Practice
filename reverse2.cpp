#include <iostream>
#include<math.h>

using namespace std;
int main()
{
    int i,num ,rem,reverse=0;
    cin>>num;
    
    while(num!=0)
    {
        rem=num%10;
        reverse=reverse*10+rem;
        
        num=num/10;
        
    }
    cout<< reverse;
}

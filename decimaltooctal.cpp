#include <iostream>

using namespace std;

int main()
{
    int rem,n;
    cin>>n;
    string str;
    while(n!=0)
    {
        rem=n%8;
        str=to_string(rem)+str;
        n/=8;
    }
    cout<<str;
    
}
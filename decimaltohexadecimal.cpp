# include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int rem;
    cin>>n;
    string str;
    while(n!=0)
    {
        rem=n%16;
        if(rem<10)
        str+=rem+'0';
        else 
        str+=rem -10+'A';
        n/=16;
    }
    
        reverse(str.begin(),str.end());
    
    cout<<str<<endl;
}
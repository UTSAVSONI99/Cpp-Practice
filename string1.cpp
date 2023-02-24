# include<iostream>
# include<string>
using namespace std;
int main()
{
    string str=" utsav";
    
    for(int i=0;i<str.size();i++)
    {
        str[i]-=32;
    }

    cout<<str;
}
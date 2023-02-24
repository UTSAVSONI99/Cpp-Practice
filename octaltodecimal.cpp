# include<iostream>
 using namespace std;

int Octaltodecimal(int n)
{
    int ans=0;
    int y=1;
    while(n!=0)
    {
        int x=n%10;
        ans += x*y;
        y*=8;
        n/=10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<< Octaltodecimal(n);
}

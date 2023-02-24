# include<iostream>
 using namespace std;

int Binarytodecimal(int n)
{
    int ans=0;
    int y=1;
    while(n!=0)
    {
        int x=n%10;
        ans += x*y;
        y*=2;
        n/=10;
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    cout<< Binarytodecimal(n);
}

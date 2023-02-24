# include<iostream>
using namespace std;
 int main()
 {
    int i,j,n,m;
    cin>>n>>m;
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           cin>>a[i][j];
        }
    }

    int x;
    cin>>x;
    bool flag= false;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                cout<<i<<" "<<j<<endl;
                flag = true;
            }
        }
    }
     if(flag)
     {
        cout<<" success";

     }
     else
     cout<<" Faliure";
    
 }
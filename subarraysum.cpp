#include <iostream>
using namespace std;

int main()
{
    int i,n;
    cin>>n;
    int a[n];
    
     for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        int sum=0,fs=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
             fs=fs+sum;
             
        }
        cout<<fs<<endl;
       
           

    
    }
    
} 
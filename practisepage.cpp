# include<iostream>
using namespace std;
int main()
{
   int i,n;
   
   cin>>n;
   bool flag=0;
    i=2;
    while(i<n)
    {
        if(n%i==0)
        {
        flag=1;
        break;
        }

         i++;
         
        
    }

    if(flag==1)
    {
    cout<<" not a prime";
    }
    else 
    cout<<" prime";
     

}


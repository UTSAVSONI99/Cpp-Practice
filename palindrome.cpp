# include<iostream>
using namespace std;

int main()
{
    int i,j,n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool flag=1;
    
     i=0;
     j=n-1;
    while(i<=j)
    {
        if(arr[i]==arr[j])
        {
            flag=1;
            
        }
        else
        {
          flag=0;
          break;
        }
        i++;
        j--;
        
    }

    if(flag==1)
    cout<< " is palindrome";
    else
    cout<<" not palindrome";
    
    return 0;

}
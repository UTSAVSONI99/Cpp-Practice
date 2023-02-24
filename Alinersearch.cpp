#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int key)
{
    
    for(int j=0;j<n;j++)
    {
       if(key==arr[j])
       return j; 
    }
    return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    
    }
    int key;
    cin>>key;
     int val=linearsearch(arr,n,key);
      cout<<val;
      return 0;

}
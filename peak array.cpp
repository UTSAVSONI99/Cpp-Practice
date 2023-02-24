#include<iostream>
using namespace std;
int main()
{


int arr[]={0,1,3,5,15,13,8,7};
int s=0;
int e=7;


  while(s<e)

{
int mid=s+(e-s)/2;
 if(arr[mid]<arr[mid+1])
 s=mid+1;
  else
  {
   e=mid;
  }



}
cout<<arr[s];
return 0;
}

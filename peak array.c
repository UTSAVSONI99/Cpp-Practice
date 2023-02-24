#include<iostream>
using namespace std;
int arr[]={0,1,3,5,15,13,8,7};
int s=0;
int e=7;
int mid=s+(s+e)/2;
while(s<e)
{
 if(arr[mid]<arr[mid+1])
 s=mid+1;
  else
  {
   e=mid;
  }
  int mid=s+(s+e)/2;

}

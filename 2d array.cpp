#include<iostream>
using namespace std;
int main()
{
  int i,j;
  int A[2][3];
  cout<<" enter the values";
  for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
      {
          cin>>A[i][j];
      }
  }
  for(i=0;i<2;i++)
  {
      for(j=0;j<3;j++)
      cout<<A[i][j]<<" ";
  }

}

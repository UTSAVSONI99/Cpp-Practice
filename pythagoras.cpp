#include <iostream>
#include<cmath>
using namespace std;

int pythagoras(int a,int b,int c)
{
   if( pow(a,2)==pow(b,2)+pow(c,2))
   return 1;
   else
   return 0; 
}

int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<pythagoras(x,y,z);
}
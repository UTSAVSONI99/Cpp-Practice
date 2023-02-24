# include<iostream>
using namespace std;

int main()
{
    int i;
    int arr[]={1,2,3,4};
    int*ptr= arr;
    for(i=0;i<4;i++)
    {
        cout<<*(ptr+i);
    }
}
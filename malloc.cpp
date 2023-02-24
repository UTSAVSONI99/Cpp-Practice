#include<iostream>
using namespace std;
int main()
{
    int i,*ptr,n,values;
    cout<<" enter the size";
    cin>>n;
    ptr=(int*)malloc(n*sizeof(int));
    cout<<"enter the values";

    for(i=0;i<n;i++)
    {
        scanf("%d",(ptr+i));
    }

 for(i=0;i<n;i++)
    {

        cout<<*(ptr+i)<<" ";
    }
    free(ptr);
}

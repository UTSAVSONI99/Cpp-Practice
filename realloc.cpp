#include<iostream>
using namespace std;
int main()
{
    int i,n,*ptr,*ptr1;
    cout<<"enter the size";
    cin>>n;
    ptr=(int*)malloc(n*sizeof(int));
    cout<<"enter the values";
    for(i=0;i<n;i++)
    {
      cin>>*(ptr+i);
    }
    cout<<" enter updated size";
    cin>>n;
    ptr1=(int*)realloc(ptr,n*sizeof(int));
    cout<<ptr<<" "<<ptr1<<endl;
    for(i=0;i<n;i++)
    {
        cout<<*(ptr1+i)<<" ";
    }
    free(ptr1);

}

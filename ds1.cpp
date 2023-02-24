#include<iostream>
using namespace std;
int search(int A[],int n,int key)
{
    int i;
    for(i=0;i<n;i++){
       if(key==A[i]){
        return i;
       }
}
       return 0;



}
int main()
{
    int key;
    int A[]={2,4,6,7,0,3,1,56,76,32,12};
    cout<<" enter element for searching";
    cin>>key;
      int i= search(A,11,key);
      cout<<"element found at index"<<" "<<i;
}

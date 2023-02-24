# include<iostream>
using namespace std;

 void primenumber(int n)
 {
    int box[70]={0};
    
    for(int i=2;i<n;i++)
    {
        if(box[i]==0)
        {
            for(int j=i*i;j<n;j+=i)
            {
               box[j]=1;
            }
        }
    }

    for(int i=2;i<n;i++)
    {
        if(box[i]==0)
        cout<<i<<" ";
    }

 }




int main()
{ 
    
    primenumber(30);
}
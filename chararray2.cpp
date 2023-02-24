# include<iostream>
using namespace std;

int main()
{
    int n,i=0;
    cin>>n;
    cin.ignore();
    char arr[n+1];
    cin.getline(arr,n);
     cin.ignore();
     int currlength=0;
     int maxlength=0;
     int st=0;
     int maxst=0;

     while(1)
     {
        if(arr[i]==' '|| arr[i]=='\0')
        {
            if(maxlength<currlength)
            {
                maxlength=currlength;
                maxst=st;
                

            }
            currlength=0;
            st=i+1;
        }
         else
         {
            currlength++;
         }
         if(arr[i]=='\0')
         break;
         i++;
     }

     cout<< maxlength<<endl;
     for(i=0;i<maxlength;i++)
     {
        cout<<arr[i+maxst];
     }

}
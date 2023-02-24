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
     while(1)
     {
        if(arr[i]==' '|| arr[i]=='\0')
        {
            if(maxlength<currlength)
            {
                maxlength=currlength;
                

            }
            currlength=0;
        }
         else
         {
            currlength++;
         }
         if(arr[i]=='\0')
         break;
         i++;
     }

     cout<< maxlength;

}
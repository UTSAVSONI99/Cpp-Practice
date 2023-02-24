# include<iostream>
# include<string>
# include<algorithm>
using namespace std;
int main()
{
    string str="abcagghaabbiio";

    int freq[26];
    for(int i=0;i<26;i++)
    {
        freq[i]=0;
    }

    for(int i=0;i<str.size();i++)
    {
        freq[str[i]-'a']++;


    }
      char ans='a';
     int max=0;
     for(int i=0;i<26;i++)
     {
        if(max<freq[i])
        {
         ans='a'+i;
        max=freq[i];
        }
     }

  cout<<max<<endl;
  cout<<ans;

}
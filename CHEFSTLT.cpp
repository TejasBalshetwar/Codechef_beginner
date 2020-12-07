#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
     string s1,s2;
     cin>>s1;
     cin>>s2;
     int min=0;
     int max=0;
     
     int l=s1.size();
     
     for(int i=0;i<l;i++)
     {
         if(s1[i]==s2[i])
         {
            if(s1[i]=='?' && s2[i]=='?')
          {
             max++;
          } 
         }
         else
         {
              if(s1[i]=='?' && s2[i]!='?')
         {
             max++;
         }
         if(s1[i]!='?' && s2[i]=='?')
         {
             max++;
         }
         if(s1[i]!='?' && s2[i]!='?' )
         {
             max++;
             min++;
         }
         }
     }
     cout<<min<<" "<<max<<endl;
    }   
	return 0;
}
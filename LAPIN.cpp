#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    string s;
	    cin>>s;
	    if(s.length()%2==0)
	    {
	      int temp=s.length()/2;
	      string s1=s.substr(0,temp);
	      string s2=s.substr(temp,temp);
	      sort(s1.begin(),s1.end());
	      sort(s2.begin(),s2.end());
	      if(s1==s2)
	      {
	          cout<<"YES"<<endl;
	      }
	      else
	      {
	          cout<<"NO"<<endl;
	      }
	    }
	    else
	    {
	        int temp=s.length()/2;
	        string s1=s.substr(0,temp);
	        string s2=s.substr(temp+1,temp);
	        sort(s1.begin(),s1.end());
	        sort(s2.begin(),s2.end());
	        if(s1==s2)
	        {
	            cout<<"YES"<<endl;
	        }
	        else
	        {
	            cout<<"NO"<<endl;
	        }
	        
	    }
	}
	return 0;
}

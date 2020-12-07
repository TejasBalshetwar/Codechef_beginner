#include <iostream>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string s;
	cin>>s;
	int n;
	cin>>n;
	while(n--)
	{
	string w;
	cin>>w;
	int flag=1;
	for(int i=0;i<w.length() && flag;i++)
	{
	    flag=0;
	    for(int j=0;j<s.length();j++)
	    {
	        if(w[i]==s[j])
	        {
	            flag=1;
	            break;
	        }
	    }
	}
	(flag)?cout<<"Yes":cout<<"No";
	cout<<endl;
	}
	return 0;
}

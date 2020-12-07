#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    
	    int counta=0,countb=0;
	    string s;
	    cin>>s;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='a')
	        counta++;
	        else
	        if(s[i]=='b')
	        countb++;
	    }
	    if((counta<countb)&&(counta!=0))
	    cout<<counta<<endl;
	    else
	    if((countb<counta)&&(countb!=0))
	    cout<<countb<<endl;
	    else if(counta==0)
	    cout<<counta<<endl;
	    else
	    cout<<countb<<endl;
	}
	return 0;
}

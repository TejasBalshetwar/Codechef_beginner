#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int apple[t],orange[t],coin[t],diff=0;
	for(int i=0;i<t;i++)
	{
		cin >> apple[i] >> orange[i] >> coin[i];
	}
	for(int i=0;i<t;i++)
	{
	    if(apple[i]>orange[i])
	    {
	        diff=apple[i]-orange[i];
	    }
	    else
	    {
	        diff=orange[i]-apple[i];
	    }
	    if(diff>coin[i])
	    {
	        cout<<diff-coin[i]<<endl;
	    }
	    else
	    {
	        cout<<"0"<<endl;
	    }
	}
	return 0;
}

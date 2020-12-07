#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int t=0;
	cin>>t;
	while(t--)
	{
	    int n=0,m=0;
	    cin>>n>>m;
	    if(n%2==0 || m%2==0)
	    {
	        cout<<"YES"<<endl;
	    }
	    else
	    {
	        cout<<"NO"<<endl;
	    }
	}
	return 0;
}

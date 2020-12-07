#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int n=0,max,count=0;
	    cin>>n;
	    while(n)
	    {
	        max=int(sqrt(n));
	        n=n-max*max;
	        count++;
	    }
	    cout<<count<<endl;
	    
	}
	return 0;
}

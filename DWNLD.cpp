#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long int TC=0;
	cin>>TC;
	while(TC--)
	{
	    int n=0,k=0;
	    cin>>n>>k;
	    int t,d,sum=0;
	    for(int i=0;i<n;i++)
	    {
			cin>>t>>d;
			if(k>0)
        	{
            	if(t>k)
            	{
                	sum+=(t-k)*d;
                	k=0;
            	}
        	    else if(t<=k)
            	{
            	 k=k-t;  
            	}
        	}
        	else
        	{
            	sum+=t*d;
        	}
	    }
	    cout<<sum<<endl;
	}	
	return 0;
}

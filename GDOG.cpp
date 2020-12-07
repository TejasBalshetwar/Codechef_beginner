#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,k,rem,count=0;
	    cin>>n>>k;
	    for(int i=1;i<=k;i++)
	    {
	        rem=n%i;
	        if(rem>count)
	        {
	            count=rem;
	        }
	                 
	    }
	    
        cout<<count<<endl;
	}
	return 0;
}

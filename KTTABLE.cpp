#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int max[n],req[n],count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>max[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>req[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(i==0)
	        {
	            if(max[i]>=req[i])
	            count++;
	        }
	        else
	        {
	            if(max[i]-max[i-1]>=req[i])
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	
	return 0;
}

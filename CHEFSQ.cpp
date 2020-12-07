#include <iostream>
using namespace std;

int main()
{
	// your code goes here
	int t;
	cin>>t;
	
	for(int i=0;i<t;i++)
	{
	    long int n,m,p=0;
	    long long int A[1000]={0},B[1000]={0};
	    
	    cin>>n;
	    for(int j=0;j<n;j++)
	    {
	        cin>>A[j];
	    }
	    
	    cin>>m;
	    for(int j=0;j<m;j++)
	    {
	        cin>>B[j];
	    }
	    
	    for(int j=0;j<n;j++)
	    {
	        if(A[j]==B[p])
	        {
	            p++;
	        }
	    }
	    
	    if(p==m)
	    {
	        cout<<"Yes\n";
	    }
	    else
	    {
	        cout<<"No\n";
	    }
	}
	return 0;
}
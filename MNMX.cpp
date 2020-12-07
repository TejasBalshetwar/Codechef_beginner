#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    long int n;
	    cin>>n;
	    long int a[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>a[j];
	    }
	    long int min=a[0];
	    for(int j=1;j<n;j++)
	   {
	      if(min>a[j])
	      {
	         min=a[j];
	      }
	   }
	  long int ans=min*(n-1);
	  cout<<ans<<endl;
	}
	
	return 0;
}

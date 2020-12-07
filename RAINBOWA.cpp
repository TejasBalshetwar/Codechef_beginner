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
	    int flag=1;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    if(a[0]!=1)
	    {
	        flag=0;
	        
	    }
	    else
	    {
	        for(int i=0,j=n-1;i<j;i++,j--)
	        {
	            
	           if(a[i]!=a[j])
	           {
	             flag=0;
	             break;
	           }
	           if(a[i]!=a[i+1] && a[i]+1!=a[i+1])
	           {
	               flag=0;
	               break;
	           }
	       }
	       if(a[n/2]!=7)
	       {
	            flag=0;
	        }
	    }
	    
	    flag?cout<<"yes\n":cout<<"no\n";
	    
	}
	return 0;
}

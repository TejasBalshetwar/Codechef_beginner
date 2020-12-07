#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int n,k;
	    cin>>n>>k;
	    int arr[n]={0};
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        arr[i]+=k;
	    }
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]%7==0)
	        {
	            count++;
	            continue;
	        }
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}

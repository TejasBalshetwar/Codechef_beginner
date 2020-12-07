#include <bits/stdc++.h>
using namespace std;



int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int n=0;
	    cin>>n;
	    char arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]=='I')
	        {
	            cout<<"INDIAN"<<endl;
	            break;
	        }
	        else if(arr[i]=='Y')
	        {
	            cout<<"NOT INDIAN"<<endl;
	            break;
	        }
	        if(i==n-1)
	        {
	            cout<<"NOT SURE"<<endl;
	        }
	    }
	}
	return 0;
}

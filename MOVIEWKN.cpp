#include <iostream>
#include<vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	// your code goes here
	int t=0,sum_n=0;//sum_n=sum of all
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    if(sum_n<=100000)
	    {
	    int n=0,k=0;//k=most number of queries chef can solve n=number of days
	    cin>>n>>k;
	    if(k>=100000000)
	    {
	    std::vector<int> q;
	    for(int i=0;i<n;i++)
	    {
	        int a=0;
	        cin>>a;
	        q.push_back(a);
	        sum_n+=1;
	    }
	    int days=0;
	    for(int i=0;i<100000000;i++)
	    {
	        if(q[i]<=100000000)
	        {
	            
	        if(i>=n)
	        {
	            while(q[i-1]-k>=0)
	            {
	                days++;
	            }
	            break;
	        }
	        else
	        {
	            if(i<n-1)
	            {
	                q[i+1]+=(q[i]-k);
	                days++;
	            }
	            if(i==n-1)
	            {
	                days++;
	            }
	            
	        }
	        
	    }
	    }
	    cout<<days<<endl;
	    }
	        
	    }
	
    }
	return 0;
}

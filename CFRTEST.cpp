#include <iostream>
#include<set>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t=0;
	cin>>t;
	for(int j=0;j<t;j++)
	{
	    int n=0;
	    cin>>n;
	    int d[n]={0};//array of dates
	    for(int i=0;i<n;i++)
	    {
	        cin>>d[i];
	    }
	    int count=0;
	    sort(d,d+n);
	    for(int i=0;i<n;i++)
	    {
	        if(i==0)
	        {
	            count++;
	        }
	        else if(d[i]==d[i-1])
	        {
	            continue;
	        }
	        else
	        {
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}
//alternate code
int code() {
	// your code goes here
	int testcase;
	cin>>testcase;
	while(testcase--) {
	    int num;
	    cin>>num;
	    set<int> s;
	    for(int i=0;i<num;i++) {
	        int tr;
	        cin>>tr;
	        s.insert(tr);
	    }
	    cout<<s.size()<<endl;
	}
	return 0;
}

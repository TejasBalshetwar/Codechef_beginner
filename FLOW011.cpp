#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n;
	while(t--)
	{
	    cin>>n;
	    if(n < 1500)
	    {
	        cout<<2*n<<endl;
	    }
	    else
	    {
	        cout<<fixed<<n+500+(0.98*n)<<endl;
	    }
	}
	return 0;
}

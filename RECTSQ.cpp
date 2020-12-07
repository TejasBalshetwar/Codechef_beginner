#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int n,m;//n=length and m=breadth
	    cin>>n>>m;
	    int a=n*m;
	    int gcd=__gcd(n,m);
	    int k=a/(gcd*gcd);
	    cout<<k<<endl;
	}
	return 0;
}

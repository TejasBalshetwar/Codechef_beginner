#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int n,reverse=0,a;
	    cin>>n;
	    while(n!=0)
	    {
	        a=n%10;
	        reverse=reverse*10+a;
	        n=n/10;
	    }
	    cout<<reverse<<endl;
	}
	return 0;
}

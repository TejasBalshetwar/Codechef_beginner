#include <iostream>
using namespace std;

int main() {
    int T,first,last;
    cin>>T;
    while(T--)
    {
        int n;
        cin>>n;
        last=n%10;
        while(n>=10)
	    {
	      
	        n=n/10;
	        
	    }
	    first=n;
        cout<<first+last<<endl;
    }
	return 0;
}

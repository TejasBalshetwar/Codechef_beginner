#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int A,B;
	    cin>>A>>B;
	    if(A>B)
	    {
	    cout<<A<<" "<<A+B<<endl;
	    }
	    else
	    {
	    cout<<B<<" "<<A+B<<endl;    
	    }
	        
	    }
	return 0;
}

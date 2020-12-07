#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int N,a,count=0;
	    cin>>N;
	    while(N!=0)
	    {
	        a=N%10;
	        if(a==4)
	        {
	            count+=1;
	        }
	        N=N/10;
	        
	    }
	    cout<<count<<endl;
	}
	return 0;
}

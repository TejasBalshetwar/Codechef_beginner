#include <iostream>
using namespace std;
int factorial(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main() {
	// your code goes here
	int t,n;
	cin>>t;
	if(t>=1 || t<=1000)
	{
	while(t--)
	{
	    cin>>n;
	    cout<<factorial(n)<<endl;
	}
	}
	return 0;
}
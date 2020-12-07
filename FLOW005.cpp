#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int x,sum=0;
        cin>>x;
        sum+=x/100;
        x%=100;
        sum+=x/50;
        x%=50;
        sum+=x/10;
        x%=10;
        sum+=x/5;
        x%=5;
        sum+=x/2;
        x%=2;
        sum+=x;
        cout<<sum<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int sum = 0;
		int n;
		cin>>n;
		int N = n;
		while(n!=0)
		{
			int rem = n%10;
			sum = rem + sum*10;
			n /= 10;
		}
    if (sum == N)
        cout << " wins"<<endl;
    else
        cout << "loses"<<endl;
	    
	}
	return 0;
}

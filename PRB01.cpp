#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    int i, n;
        bool isPrime = true;
        cin >> n;

        if (n == 0 || n == 1) 
        {
            isPrime = false;
        }
        else 
        {
            for (i = 2; i <= n / 2; ++i) 
            {
                if (n % i == 0) 
                {
                    isPrime = false;
                    break;
                }
            }
        }
    if (isPrime)
        cout <<"yes"<<endl;
    else
        cout <<"no"<<endl;

	    
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int n=0,x,sum,prod;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    x=n;
        for(int i=0; i<n-1; i++)
        {
            sum=a[i];
            prod=a[i];
            for(int j=i+1; j<n; j++)
            {
                sum+=a[j];
                prod*=a[j];
                if(sum==prod)
                x++;
            }
        }
        cout << x << endl;
	}
	return 0;
}

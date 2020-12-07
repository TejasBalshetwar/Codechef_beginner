#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int n=0;
	    cin>>n;
	    int answer=0;
	    for(int j=1;j<=n;j++)
	    {
	       int a,b;
	       cin >> a>>b;;
	       answer^=j;
	   }
	   cout << answer << endl;
	}
	return 0;
}

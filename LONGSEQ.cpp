#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    string n;
	    int count0=0,count1=0;
	    cin>>n;
	    for (int i=0; i<n.length(); i++)
	    {
	        (n[i] == '0')?count0++:count1++;//use of ternery operator
	    }
	    ((count0 == 1) || (count1 == 1))?cout<<"Yes":cout<<"No";
	    cout<<"\n";
	}
	return 0;
}

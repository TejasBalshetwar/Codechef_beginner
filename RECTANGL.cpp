#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a,b,c,d;
        cin>>a>>b>>c>>d;
    
    if((a==c&&b==d)||(a==b&&c==d)||(a==d&&c==b))
    {
        cout<<"YES"<<endl;
    }
    else 
    {
        cout<<"NO"<<endl;
    }
	
	}
	return 0;
}

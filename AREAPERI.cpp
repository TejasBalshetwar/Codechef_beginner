#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int l=0,b=0;
	cin>>l>>b;
	int area=l*b;
	int peri=2*(l+b);
	if(area>peri)
	{
	    cout<<"Area"<<endl;
	    cout<<area<<endl;
	}
	else if(peri>area)
	{
	    cout<<"Peri"<<endl;
	    cout<<peri<<endl;
	}
	else
	{
	    cout<<"Eq"<<endl;
	    cout<<area<<endl;
	}
	return 0;
}

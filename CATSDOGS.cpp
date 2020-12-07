#include <iostream>
using namespace std;


int main() {
    cin.tie(NULL);
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	int c,d,l;
    cin>>c>>d>>l;
    if(l%4==0)
    {
        int cats_on_back = d+c-l/4;
        if(cats_on_back>=0&&cats_on_back<=min(c,2*d))
        {
            cout<<"yes"<<endl;
        }
        else{
            cout<<"no"<<endl;
        }
    }
    else
    {
        cout<<"no"<<endl;
    }
	}
	return 0;
}

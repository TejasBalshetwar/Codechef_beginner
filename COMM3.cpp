#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		int r;
		cin>>r;
		int x1,x2,x3,y1,y2,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		float dist1,dist2,dist3;
		dist1=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
		dist2=sqrt(pow(x3-x2,2)+pow(y3-y2,2));
		dist3=sqrt(pow(x1-x3,2)+pow(y1-y3,2));
		if(dist3<=r)
			cout<<"yes\n";
		else
		{
			if(dist2<=r && dist1<=r)
				cout<<"yes\n";
			else
				cout<<"no\n";
		}
	}
	return 0;
}

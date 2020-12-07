#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int hardness=0;
	    long int tensile=0;
	    float carbon=0.0;
	    cin>>hardness>>carbon>>tensile;
	    if(hardness>50 && carbon<0.7 && tensile>5600)
	    {
	        cout<<"10"<<endl;
	        continue;
	    }
	    else if(hardness>50 && carbon<0.7)
	    {
	        cout<<"9"<<endl;
	        continue;
	    }
	    else if(tensile>5600 && carbon<0.7)
	    {
	        cout<<"8"<<endl;
	        continue;
	    }
	    else if(tensile>5600 && hardness>50)
	    {
	        cout<<"7"<<endl;
	        continue;
	    }
	    else if(hardness>50 || carbon<0.7 || tensile>5600)
	    {
	        cout<<"6"<<endl;
	    }
	    else
	    {
	        cout<<"5"<<endl;
	    }
	}
	return 0;
}

#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    int a=0,b=0;//a=limak,b=bob
	    cin>>a>>b;
	    int od=sqrt(a);
	    int ev=od*(od+1);//number of candies bob has to eat
	 if(ev>b)//number of candies bob has to eat is greater than the candies he can eat
	 {
	     cout << "Limak" << endl;
	 }
	 else
	 {
	     cout << "Bob" << endl;
	 }
	    
	}
	return 0;
}

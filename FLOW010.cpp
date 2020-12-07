#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
	    char a;
	    cin>>a;
	    if(a=='b' || a=='B')
	    {
	        cout<<"BattleShip"<<endl;
	    }
	    else if(a=='c' || a=='C')
	    {
	        cout<<"Cruiser"<<endl;
	    }
	    else if(a=='d' || a=='D')
	    {
	        cout<<"Destroyer"<<endl;
	    }
	    else if(a=='f' || a=='F')
	    {
	        cout<<"Frigate"<<endl;
	    }
	}
	return 0;
}

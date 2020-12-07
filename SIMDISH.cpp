#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int same=0;
	    string dish1[4];
	    for(int i=0;i<4;i++)
	    {
	        cin>>dish1[i];
	    }
	    string dish2[4];
	    for(int i=0;i<4;i++)
	    {
	        cin>>dish2[i];
	    }
	    for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                if(dish1[i]==dish2[j])
                same++;
            }
        }
	    if(same>=2)
	    {
	        cout<<"similar"<<endl;
	    }
	    else
	    {
	        cout<<"dissimilar"<<endl;
	    }
	}
	return 0;
}

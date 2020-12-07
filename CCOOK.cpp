#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n = 0;
	cin>>n;
	int score[5] = {0};
	while(n--)
	{
	    int count=0;
	    for(int i=0; i<5; i++)
	    {
	        cin>>score[i];
	    }
	    for(int i=0; i<5; i++)
	    {
	        if(score[i] == 1)
	        {
	            count++;
	        }
	    }
	    if(count == 0)  cout << "Beginner" << endl;
		if(count == 1)  cout << "Junior Developer" << endl;
		if(count == 2)  cout << "Middle Developer" << endl;
		if(count == 3)  cout << "Senior Developer" << endl;
		if(count == 4)  cout << "Hacker" << endl;
		if(count == 5)  cout << "Jeff Dean" << endl;
	}
	return 0;
}

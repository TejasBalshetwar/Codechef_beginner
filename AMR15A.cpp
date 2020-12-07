#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
	  cin>>A[i];  
	}
	int count=0,count2=0;
	for(int i=0;i<n;i++)
	{
	  if(A[i]%2==0)
	  {
	      count+=1;
	  }
	  else
	  {
	      count2+=1;
	  }
	}
	if(count>count2)
	{
	    cout<<"READY FOR BATTLE";
	}
	else{
	    cout<<"NOT READY";
	}
	return 0;
}

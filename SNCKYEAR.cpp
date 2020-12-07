#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t=0;
// 	int arr[5]={ 2010, 2015, 2016, 2017 ,2019};
// 	int len=sizeof(arr);
	cin>>t;
	for(int i=0;i<t;++i)
	{
	    int n;
	    cin>>n;
	    if ( n==2010||n==2015||n==2016||n==2017||n==2019)
	        cout<<"HOSTED"<<endl;
	    else
	        cout<<"NOT HOSTED"<<endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int T;        
    cin>>T;//input number of times we want to perform the operation of sum of digits
	while(T--)
	{
	    int a,N,sum=0;
	    cin>>N;
	    while(N!=0)
	    {
	        a=N%10;//this gives last digit of n
	        N=N/10;//this removes last digit if n
	        sum += a;//updates sum variable
	    }
	    cout<<sum<<endl;
	}
	return 0;
}

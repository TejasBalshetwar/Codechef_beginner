#include <iostream>
using namespace std;
int Sum(int d ,int n)
{
   int sum=n*(n+1)/2;
   while(d!=1)
   {
       sum=Sum(1,sum);
       d--;
   }
   return sum;
   
}
int main() {
	int T;
	cin>>T;
	while(T--)
	{
	    int d,n;
	    cin>>d>>n;
	    cout<<Sum(d,n)<<endl;
	}
	return 0;
}

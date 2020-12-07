#include <iostream>
using namespace std;
//function for prime number
int isPrime(int n) {
   int i, flag = 0;
   for(i=2; i<=n/2; ++i) {
      if(n%i==0) {
         flag=1;
         break;
      }
   }
   if (flag==0)
   return 1;
   else
   return 0;
}
int main() {
	// your code goes here
	int t=0;
	cin>>t;
	while(t--)
	{
	    int x=0,y=0,n;
        cin>>x>>y;
        int z=1;
        n=x+y+z;
        while(z)
        {
        n=x+y+z;
        if(isPrime(n))
        {
            cout<<z<<endl;
            break;
        }
        else
        {
            z++;
        }
        }
	}
	return 0;
}

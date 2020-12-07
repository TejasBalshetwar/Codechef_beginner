#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() 
{
int t ;
cin>>t;
while(t--){
   long int a,b;
    cin>>a>>b;
    long int gcd1;
    long int lcm;
 
   gcd1=__gcd(a,b);
    
    lcm=(a*b)/gcd1;
    cout<<gcd1<<" "<<lcm<<endl;
    
   }
// your code goes here
	return 0;
}

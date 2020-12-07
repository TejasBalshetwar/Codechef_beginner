#include<bits/stdc++.h>
using namespace std;



long double solve()
{
	
	int qty,price;
	cin>>qty>>price;
	long double expense=(long double)qty*price;
	if(qty>1000)
	{
		expense=expense-(0.1 * expense);	
	}	
	
	return expense;
	
}

int main()
{
	cout<<fixed<<setprecision(6);
	
	int t;
	cin>>t;
	while(t--)
	cout<<solve()<<'\n';
}


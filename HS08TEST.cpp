#include <iostream>
using namespace std;

int main() {
	int amount;
	float balance;
	cin>>amount>>balance;
	if(amount+0.5>balance)
   	{
   		std::cout << balance << std::endl;		
   	}
   	else if(amount%5!=0)
   	{
   	    cout<<balance;
   	}
   	else
    {  	    
        cout<<balance-amount-0.5;
    }
	
	return 0;

    
}

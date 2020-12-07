#include <iostream>
using namespace std;
#include <array>

int main() {
	// your code goes here
	int t;
	cin >> t;
	for (int i = 0; i < t; i++) {
	    int n;
	    cin>>n;
	   
	    
	    long long int arr[n];
	    for(int j=0;j<n;j++){
	        cin>>arr[j];
	       
	        
	    }
	    long long int brr[n];
	    for(int j=0;j<n;j++){
	        brr[j]=1;
	    }
	   for(int j=n-2;j>=0;j--){
	       
	       if(arr[j]*arr[j+1]<0){
	           brr[j]=brr[j+1]+1;
	       }
	       
	   }
	   for(int j=0;j<n;j++){
	       cout<<brr[j]<<" ";
	   }
	   cout<<endl;
	    
	}
	return 0;
}

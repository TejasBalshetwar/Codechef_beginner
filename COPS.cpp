#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	    int x,y,m,dist;
	    int count=0;
	    cin>>m>>x>>y;
	    dist=x*y;
	    vector<int> house(m);
	    vector<int> arr(101);
	    for(int j=0;j<m;j++){
	        cin>>house[j];
	    }
	    for(int j=0;j<m;j++){
	        int low,high;
	        low=house[j]-dist;
	        high=house[j]+dist;
	        if(low<1){
	            low=0;
	        }
	        if(high>100){
	            high=100;
	        }
	        fill(arr.begin()+low,arr.begin()+high+1,1);
	    }
	    for(int j=1;j<=100;j++){
	        if(arr[j]==0){
	            count++;
	        }
	    }
	    cout<<count<<endl;
	}
	return 0;
}

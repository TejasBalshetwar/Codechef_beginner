#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin >> T;
	while(T--){
	    long N;
	    cin >> N;
	    string color;
	    cin >>color;
	    long colour_red, colour_blue, colour_green;
	    colour_red=count(color.begin(),color.end(),'R');
	    colour_blue=count(color.begin(),color.end(),'B');
	    colour_green=count(color.begin(),color.end(),'G');
	    
	    long R=colour_red, B=colour_blue, G=colour_green;
	    long largest = R> B ? (R > G ? R : G) : (B > G ? B : G);
	    
	    std::cout << N-largest << std::endl;
	}
	return 0;
}
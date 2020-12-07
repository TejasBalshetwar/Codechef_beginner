#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    if(a == 0){
        return b;
    }
    return gcd(b%a, a);
}
	
int main () {
	int t, a[102][52],k,fpb,b[102];
	cin >> t;
	for (int i=0;i<102;i++){
		for(int j=0;j<52;j++){
			a[i][j]=0;
		}
	}
	for (int i=0;i<t;i++){
		cin >> k;
		b[i]=k;
		cin>> a[k][0];
		fpb=a[k][0];
		for (int j=1;j<k;j++){
			cin>>a[k][j];
			fpb=gcd(fpb,a[k][j]);
		}
		for (int j=0;j<k;j++){
			a[k][j]=a[k][j]/fpb;
			cout << a[k][j]<<' ';
		}
		cout << '\n';
	}
	return 0;
}
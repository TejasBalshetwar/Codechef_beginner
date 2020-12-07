#include <bits/stdc++.h> 
using namespace std; 

int main() 
{ 
    int t;
    cin>>t;
    while(t--){
        int n,ans=0,total=2048;
        cin>>n;
        while(n!=0){
            ans+=n/total;
            n%=total;
            total/=2;
        }
        cout<<ans<<"\n";
    }
    return 0; 
}
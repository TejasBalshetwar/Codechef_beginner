#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int max=0;
        if(s.length()%2==0){
            int max=0;
            for(int i=0;i<s.length();i++){
                int count=1;
                for(int j=i+1;j<s.length();j++){
                    if(s[i]==s[j]){
                        count++;
                    }
                
                }
                if(max<count){
                    max=count;
                }
                
            }
            if(max==s.length()/2){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
                
            }
        }else{
            cout<<"NO"<<endl;
        }
    }
	return 0;
}

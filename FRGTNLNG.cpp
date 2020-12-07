#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, n, k, l;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        string str[n], a;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> str[i];
            arr[i]=0;
        }
        while(k--)
        {
            cin >> l;
            while(l--)
            {
                cin >> a;
                for(int i=0; i<n; i++)
                {
                    if(str[i]==a)
                    {
                        arr[i]=1;
                    }
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            if(arr[i]==1)
            cout << "YES ";
            else
            cout << "NO " ;
        }
        cout << endl;
    }
    return 0;
}
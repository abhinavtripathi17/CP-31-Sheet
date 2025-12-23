#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vector<long long>v(n);

        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        int sum = 0;
        for(int i = 0 ; i < n ; i++){
            if(v[i] % 2 == 1){
                sum += v[i];
            }
        }
        if(sum % 2 == 0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
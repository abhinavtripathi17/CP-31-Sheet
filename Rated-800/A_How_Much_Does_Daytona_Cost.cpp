#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t-- > 0){
        int n , k;
        cin >> n >> k;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }
        bool is_subsequent = false;
        for(int i = 0 ; i < n ; i++){
            if(v[i] == k) {
                is_subsequent = true;
                break;
            }

        }
        if(is_subsequent == true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    return 0;
}
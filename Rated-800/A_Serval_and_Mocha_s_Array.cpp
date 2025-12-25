#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;
        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        int flag = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n ; j++){
                if(__gcd(v[i] , v[j]) <= 2){
                    flag = 1;
                }
            }
        }
        if(flag == 1){
            cout << "Yes" <<'\n';
        }
        else{
            cout << "No" <<'\n';
        }
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n , j , k;
        cin >> n >> j >> k;

        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        int mini = INT_MAX;
        int maxi =INT_MIN;
        for(int i = 0 ; i < n ; i++){
            if(v[i] < mini){
                mini = v[i];
            }
            if(v[i] > maxi){
                maxi  = v[i];
            }
        }
        if(mini == v[j-1] && (k == 1 || k == n)){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }

    }
}
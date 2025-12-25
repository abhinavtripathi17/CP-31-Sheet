#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0 ; i < n ; i++){
            cin >> arr[i];
        }
        int ans = 0;
        if(n % 2 == 0){
            for(int i = 0 ; i < n ; i++){
                ans ^= arr[i];
            }
            if(ans == 0){
                cout << 0 << '\n';
            }
            else{
                cout << -1 << '\n';
            }
        }
        else{
            for(int i = 0 ; i < n ; i++){
                ans ^= arr[i];
            }
            cout << ans <<'\n';
        }
    }
}
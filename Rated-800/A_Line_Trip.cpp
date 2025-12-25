#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t-- > 0){
        int n , x;
        cin >> n >> x;

        vector<int>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }


        int min_vol = v[0]-0;

        for(int i = 0 ; i < n-1 ; i++){
            min_vol = max(min_vol , v[i+1] - v[i]);
        }
        min_vol = max(min_vol , 2*(x - v[n-1]));

        cout << min_vol << "\n";
    }
    return 0;
}
#include<bits/stdc++.h>
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
        int cnt = 0;
        int idx = 0;
        for(int i = 0 ; i < n ; i++){
            if(v[i] == 2){
                cnt++;
            }
        }
        if(cnt % 2 == 1){
            cout << -1 <<'\n';
            continue;
        }

        int need = cnt/2;
        int new_cnt = 0;
        for(int  i = 0 ; i < n ; i++){
            if(v[i] == 2){
                new_cnt++;
            }

            if(new_cnt == need){
                idx = i+1;
                break;
            }
        }
        cout << idx << '\n';

    }
}


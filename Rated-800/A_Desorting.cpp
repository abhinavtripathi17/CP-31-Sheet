#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t-- > 0){
        int n;
        cin >> n;
        vector<long long>v(n);
        for(int i = 0 ; i < n ; i++){
            cin >> v[i];
        }

        int operations = INT_MAX;
        for(int i = 0 ; i < n-1 ; i++){
            if(v[i] <= v[i+1]){
                int req_opr = (v[i+1] - v[i])/2 + 1;
                operations = min(operations , req_opr);
            }
            else{
                operations = 0;
            }
        }
        cout << operations << endl;
    }
    return 0;
}
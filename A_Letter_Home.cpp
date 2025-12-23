#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, pos;
        cin >> n >> pos;
        
        vector<int> v(n);
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }

        int mn = *min_element(v.begin(), v.end());
        int mx = *max_element(v.begin(), v.end());

        int result = (mx - mn) + min(abs(pos - mn), abs(pos - mx));
        cout << result << endl;
    }

    return 0;
}

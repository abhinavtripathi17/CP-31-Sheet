#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> lit(n, 0);

        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                lit[i] = 1;
                if(s[i-1] == '0' && i > 0){
                    lit[i - 1] = 1;
                }
                else if(s[i+1] == '0' && i < n-1)
                    lit[i + 1] = 1;
            }
        }
    

        bool ok = true;
        for (int i = 0; i < n; i++) {
            if (lit[i] == 0) {
                ok = false;
                break;
            }
        }

        if (ok) cout << "Yes\n";
        else cout << "No\n";
    }
}

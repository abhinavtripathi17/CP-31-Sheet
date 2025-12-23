#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int num = stoi(s);
  
            int x = sqrt(num);
            if (x * x == num) {
                bool printed = false;
                for (int a = 0; a <= x; ++a) {
                    int b = x - a;
                    if (a >= 0 && b >= 0) {
                        cout << a << " " << b << endl;
                        printed = true;
                        break;
                    }
                }
                if (!printed) cout << -1 << endl;
            } else {
                cout << -1 << endl;
        }
    }
    return 0;
}

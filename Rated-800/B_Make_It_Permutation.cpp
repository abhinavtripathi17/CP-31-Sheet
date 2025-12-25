#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<vector<int>> operations;

        if (n == 3) {
            operations.push_back({1, 1, 3});
            operations.push_back({2, 2, 3});
            operations.push_back({3, 1, 2});
        } else {
            operations.push_back({1, 1, n});
            for (int i = 2; i <= n; ++i) {
                operations.push_back({i, i, n});
            }
        }

        cout << operations.size() << "\n";
        for (auto &op : operations) {
            cout << op[0] << " " << op[1] << " " << op[2] << "\n";
        }
    }
    return 0;
}
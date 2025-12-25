#include <iostream>
#include <vector>
using namespace std;

typedef pair<int, int> Operation;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; ++i) cin >> a[i];
        for (int i = 0; i < n; ++i) cin >> b[i];

        vector<Operation> ops;

        // Ensure ai < bi
        for (int i = 0; i < n; ++i) {
            if (a[i] > b[i]) {
                swap(a[i], b[i]);
                ops.emplace_back(3, i + 1);
            }
        }

        // Sort a using adjacent swaps
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                if (a[j] > a[j + 1]) {
                    swap(a[j], a[j + 1]);
                    ops.emplace_back(1, j + 1);
                }
            }
        }

        // Sort b using adjacent swaps
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n - 1; ++j) {
                if (b[j] > b[j + 1]) {
                    swap(b[j], b[j + 1]);
                    ops.emplace_back(2, j + 1);
                }
            }
        }

        cout << ops.size() << "\n";
        for (const auto& p : ops) {
    cout << p.first << " " << p.second << "\n";
}

    }

    return 0;
}

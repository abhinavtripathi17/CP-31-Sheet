#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        sort(a.begin(), a.end());
        long long res = 0;
        for (int k = 2; k < n; ++k) {
            int threshold = max(a[k], a[n - 1] - a[k]);
            int i = 0;
            int j = k - 1;
            long long cnt = 0;
            while (i < j) {
                if (a[i] + a[j] > threshold) {
                    cnt += j - i;
                    j--;
                } else {
                    i++;
                }
            }
            res += cnt;
        }
        cout << res << '\n';
    }
    return 0;
}
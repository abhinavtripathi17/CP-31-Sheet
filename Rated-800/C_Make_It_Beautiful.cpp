#include <bits/stdc++.h>
using namespace std;

// Count number of set bits (1s) in binary
int count_bits(long long x) {
    return __builtin_popcountll(x);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        long long total_beauty = 0;

        // Priority queue to store the best beauty gains per cost
        priority_queue<pair<double, pair<int, long long>>> pq;

        for (int i = 0; i < n; ++i) {
            long long x = a[i];
            int base_beauty = count_bits(x);
            total_beauty += base_beauty;

            int current_beauty = base_beauty;
            long long current = x;

            // Try next 60 increments to find better beauties
            for (int add = 1; add <= 60; ++add) {
                ++current;
                int new_beauty = count_bits(current);
                if (new_beauty > current_beauty) {
                    int gain = new_beauty - current_beauty;
                    pq.push({(double)gain / add, {gain, add}});
                    current_beauty = new_beauty;
                }
            }
        }

        // Use the most efficient beauty increases within k operations
        while (!pq.empty() && k > 0) {
            auto top = pq.top(); pq.pop();
            int gain = top.second.first;
            long long cost = top.second.second;

            if (k >= cost) {
                total_beauty += gain;
                k -= cost;
            }
        }

        cout << total_beauty << '\n';
    }

    return 0;
}
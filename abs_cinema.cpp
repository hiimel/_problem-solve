// Link: https://codeforces.com/contest/2229/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int total_sum_b = 0;
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    long long max_b = 0;
    long long max_min_el = 0;
    for(int i = 0; i < n; i++) {
        long long maximum = max(a[i], b[i]);
        max_b += maximum;

        long long min_values = min(a[i], b[i]);
        max_min_el = max(max_min_el, min_values);
    }

    cout << max_min_el + max_b << '\n';

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
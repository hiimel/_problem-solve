// Link: https://codeforces.com/contest/2218/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    vector<int> a(7);
    int total = 0;
    int max_el = INT_MIN;

    for(int i = 0; i < 7; i++) {
        cin >> a[i]; 
        total += a[i];
        max_el = max(max_el, a[i]);
    }

    cout << 2 * max_el - total << '\n';
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
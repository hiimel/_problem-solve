// Link: https://codeforces.com/contest/2010/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int res = 0;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            res += a[i];
        } else {
            res -= a[i];
        }
    }

    cout << res << '\n';
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
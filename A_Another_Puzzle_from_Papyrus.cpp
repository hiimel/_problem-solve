// Link: https://codeforces.com/contest/2238/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, c;
    cin >> n >> c;

    vector<int> a(n), b(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int ans1 = 0;
    bool withoutorder = true;

    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) {
            withoutorder = false;
            break;
        }

        ans1 += a[i] - b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int ans2 = c;
    bool withOrder = true;
    
    for(int i = 0; i < n; i++) {
        if(a[i] < b[i]) {
            withOrder = false;
            break;
        }

        ans2 += a[i] - b[i];
    }

    int res = INT_MAX;

    if(withoutorder) {
        res = min(res, ans1);
    }

    if(withOrder) {
        res = min(res, ans2);
    }

    if(res == INT_MAX) {
        cout << -1 << '\n';
    } else {
        cout << res << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
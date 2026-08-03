// Link: https://codeforces.com/contest/1669/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int cnt = 1;
    int res = -1;

    for(int i = 1; i < n; i++) {
        if(a[i] == a[i - 1]) {
            cnt++;
        } else {
            cnt = 1;
        }

        if(cnt >= 3) {
            res = a[i];
            break;
        }
    }

    cout << res << '\n';
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
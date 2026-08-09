//Link: https://atcoder.jp/contests/abc470/tasks/abc470_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> c(n);
    for(int i = 0; i < n; i++) {
        cin >> c[i];
    }

    map<int, int> cnt;
    int maxCnt = 0;
    for(int i = 0; i < n; i++) {
        cnt[c[i]]++;
    }

    for(auto x: cnt) {
        maxCnt = max (maxCnt, x.second);
    }

    cout << n - maxCnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
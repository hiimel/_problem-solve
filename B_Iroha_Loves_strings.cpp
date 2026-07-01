// Link: https://atcoder.jp/contests/abc042/tasks/abc042_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, l;
    cin >> n >> l;

    vector<string> s(n);
    for(int i = 0; i < n; i++) {
        cin >> s[i];
    }

    sort(s.begin(), s.end());

    for(string ss: s) {
        cout << ss;
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
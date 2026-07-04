//Link: https://atcoder.jp/contests/abc264/tasks/abc264_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;

    string s = "atcoder";
    string res = s.substr(l - 1, r - l + 1);

    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
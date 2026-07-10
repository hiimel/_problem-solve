//Link: https://atcoder.jp/contests/abc417/tasks/abc417_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, a, b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    cout << s.substr(a , n - a - b) << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
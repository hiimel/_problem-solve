//Link: https://atcoder.jp/contests/abc263/tasks/abc263_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    if ((a == b && b == c && d == e) ||
    (a == b && b == d && c == e) ||
    (a == b && b == e && c == d) ||
    (a == c && c == d && b == e) ||
    (a == c && c == e && b == d) ||
    (a == d && d == e && b == c) ||
    (b == c && c == d && a == e) ||
    (b == c && c == e && a == d) ||
    (b == d && d == e && a == c) ||
    (c == d && d == e && a == b)) {
        
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
// Link: https://atcoder.jp/contests/abc072/tasks/abc072_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, t;
    cin >> x >> t;

    if(x >= t) {
        cout << x - t << '\n';
    } else {
        cout << 0 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
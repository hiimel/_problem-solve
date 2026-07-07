// Link: https://atcoder.jp/contests/abc046/tasks/abc046_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    if(a == b && b == c) {
        cout << 1 << '\n';
    } else if(a != b && a != c && b != c) {
        cout << 3 << '\n';
    } else {
        cout << 2 << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    solve();

    return 0;
}
// Link: https://atcoder.jp/contests/abc463/tasks/abc463_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    if(x * 9 == y * 16) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
}

int main() {

    solve();

    return 0;
}
// Link: https://atcoder.jp/contests/abc471/tasks/abc471_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    if(a + b == 9 || a - b == 9 || a * b == 9 || a == b * 9) {
        cout << "Nine" << '\n';
    } else {
        cout << "Nein" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
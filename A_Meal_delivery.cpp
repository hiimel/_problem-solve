// Link: https://atcoder.jp/contests/abc071/tasks/abc071_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, a, b;
    cin >> x >> a >> b;

    int val1 = abs(a - x);
    int val2 = abs(b - x);

    if(val1 > val2) {
        cout << "B" << '\n';
    } else {
        cout << "A" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
// Link: https://atcoder.jp/contests/abc139/tasks/abc139_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int cnt = 0, sckt = 1;
    while(sckt < b) {
        sckt += (a - 1);
        cnt++;
    }

    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
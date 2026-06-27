// Link: https://atcoder.jp/contests/abc460/tasks/abc460_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int cnt = 0;
    while(m != 0) {
        m = n % m;
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
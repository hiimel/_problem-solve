// Link: https://codeforces.com/problemset/problem/141/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string g, h, p;
    cin >> g >> h >> p;

    string res = g + h;
    sort(res.begin(), res.end());

    sort(p.begin(), p.end());

    if(res == p) {
        cout << "YES" <<"\n";
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
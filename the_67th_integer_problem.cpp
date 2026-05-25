// Link: https://codeforces.com/problemset/problem/2218/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x;
    cin >> x;

    int y = min (67, x + 1); 
    cout << y << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
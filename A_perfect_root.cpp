// Link: https://codeforces.com/contest/2185/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << i + 1 << " ";
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
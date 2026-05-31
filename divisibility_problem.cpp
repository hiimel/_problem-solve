// Link: https://codeforces.com/problemset/problem/1328/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int rem = a % b;
    int res = 0;
    
    if(rem == 0) {
        res = 0;
    } else {
        res = b - rem;
    }

    cout << res << '\n';
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
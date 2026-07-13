// Link: https://codeforces.com/contest/2246/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; i += 2) {
        cout << i + 1 << " " << i;

        if(i + 2 <= n) {
            cout << " ";
        }
    }

    cout << '\n';
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
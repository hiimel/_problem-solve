// Link: https://codeforces.com/contest/1646/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, s;
    cin >> n >> s;

    cout << s / (n * n) << '\n';
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
// Link: https://codeforces.com/contest/1999/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int sum = 0;
    while(n > 0) {
        int d = n % 10;
        sum += d;

        n /= 10;
    }

    cout << sum << '\n';
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
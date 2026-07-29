// Link: https://codeforces.com/contest/1791/problem/A

#include <bits/stdc++.h>
using namespace std;

const string s = "codeforces";

void solve() {
    char ch;
    cin >> ch;

    for(char c: s) {
        if(c == ch) {
            cout << "YES" << '\n';
            return;
        }
    }

    cout << "NO" << '\n';
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
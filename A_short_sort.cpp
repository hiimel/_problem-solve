// Link: https://codeforces.com/contest/1873/problem/A

#include <bits/stdc++.h>
using namespace std;

const string str = "abc";

void solve() {
    string s;
    cin >> s;

    int cnt = 0;

    for(int i = 0; i < 3; i++) {
        if(s[i] != str[i]) {
            cnt++;
        }
    }

    if(cnt == 0 || cnt == 2) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
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
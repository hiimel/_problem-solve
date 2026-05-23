// Link: https://codeforces.com/problemset/problem/265/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    int move = 0;
    for(int i = 0; i < t.length(); i++) {
        if(s[move] == t[i]) {
            move++;
        }
    }

    cout << move + 1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
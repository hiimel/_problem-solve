// Link: https://atcoder.jp/contests/abc472/tasks/abc472_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string res = "";

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'A') {
            res += s[i];
        } else {
            res += '.';
        }
    }

    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
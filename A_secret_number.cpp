// Link: https://atcoder.jp/contests/abc462/tasks/abc462_as

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string res = "";
    for(int i = 0; i < s.length(); i++) {
        if(isdigit(s[i])) {
            res += s[i];
        }
    }

    cout << res << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// Link: https://atcoder.jp/contests/abc072/tasks/abc072_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string res = "";
    for(int i = 0; i < s.length(); i++) {
        if(i % 2 == 1) {
            continue;
        }

        res += s[i];
    }

    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
// Link: https://atcoder.jp/contests/abc043/tasks/abc043_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    string res = "";
    for(int i  =0; i < s.length(); i++) {
        if(s[i] == '0' || s[i] == '1') {
            res += s[i];
        } else {
            if(!res.empty()) {
                res.pop_back();
            }
        }
    }

    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    solve();

    return 0;
}
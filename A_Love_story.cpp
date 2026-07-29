// Link: https://codeforces.com/contest/1829/problem/A

#include <bits/stdc++.h>
using namespace std;

const string str = "codeforces";

void solve() {
    string s;
    cin >> s;

    int wrong_char = 0;
    for(int i = 0; i < str.length(); i++) {
        if(str[i] != s[i]) {
            wrong_char++;
        }
    }

    cout << wrong_char << '\n';

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
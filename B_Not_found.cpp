// Link: https://atcoder.jp/contests/abc071/tasks/abc071_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    vector<bool> letters(26, false);
    for(int i = 0; i < s.length(); i++) {
        letters[s[i] - 'a'] = true;
    }

    for(int i = 0; i < 26; i++) {
        if(letters[i] == false) {
            cout << char('a' + i) << '\n';
            return;
        }
    }

    cout << "None" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
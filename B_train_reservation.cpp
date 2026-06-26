// Link: https://atcoder.jp/contests/abc463/tasks/abc463_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    char x;
    cin >> n >> x;

    int column = x - 'A';
    for(int i = 0; i < n; i++) {
        string s;
        cin >> s;

        if(s[column] == 'o') {
            cout << "Yes" << '\n';
            return;
        }
    }

    cout << "No" << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
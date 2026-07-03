// Link: https://atcoder.jp/contests/abc077/tasks/abc077_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s1, s2;
    cin >> s1 >> s2;

    reverse(s2.begin(), s2.end());

    if(s1 == s2) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    solve();

    return 0;
}
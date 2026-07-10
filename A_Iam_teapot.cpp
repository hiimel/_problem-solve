// Link: https://atcoder.jp/contests/abc418/tasks/abc418_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    if(n >= 3 && s.substr(n - 3) == "tea") {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
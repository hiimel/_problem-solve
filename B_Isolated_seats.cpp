// Link: https://atcoder.jp/contests/abc469/tasks/abc469_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'x' && ( i == 0 || s[i - 1] == 'x') && (i == n - 1 || s[i + 1] == 'x')) {
            cnt++;
        }
    }

    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
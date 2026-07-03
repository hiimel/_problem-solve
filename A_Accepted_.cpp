// Link: https://atcoder.jp/contests/tenka1-2017-beginner/tasks/tenka1_2017_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int cnt = 0;
    for(int i = 0; i < 6; i++) {
        if(s[i] == '1') {
            cnt++;
        }
    }

    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
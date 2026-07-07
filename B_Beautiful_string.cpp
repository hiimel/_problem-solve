//Link: https://atcoder.jp/contests/abc044/tasks/abc044_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int cnt[26] = {0};
    for(int i = 0; i < s.length(); i++) {
        cnt[s[i] - 'a']++;
    }

    bool isBeautiful = true;
    for(int i = 0; i < 26; i++) {
        if(cnt[i] % 2 == 1) {
            isBeautiful = false;
            break;
        }
    }

    if(isBeautiful) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
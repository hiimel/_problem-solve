//Link: https://codeforces.com/problemset/problem/2236/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    for(int i = 0; i < k; i++) {
        int cnt = 0;
        for(int j = i; j < n; j += k) {
            if(s[j] == '1') {
                cnt++;
            }
        }

        if(cnt % 2 == 1) {
            cout << "NO" << '\n';
            return;
        }
    }

    cout << "YES" << '\n';
    return;
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
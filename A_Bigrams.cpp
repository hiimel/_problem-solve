// Link: https://codeforces.com/contest/2242/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int k;
    cin >> k;

    int cnt = 0;
    bool anyValue3 = false;

    while(k--) {
        long long c;
        cin >> c;

        if(c >= 3) {
            anyValue3 = true;
        }

        if(c >= 2) {
            cnt++;
        }
    }

    if(cnt >= 2 || anyValue3) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
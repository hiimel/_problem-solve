// Link: https://www.codechef.com/problems/NUM239

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while (t--) {
        int l, r;
        cin >> l >> r;

        int cnt = 0;
        for(int i = l; i <= r; i++) {
            int digit = i % 10;

            if(digit == 2 || digit == 3 || digit == 9) {
                cnt++;
            }
        }

        cout << cnt << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
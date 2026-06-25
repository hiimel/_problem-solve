// Link: https://atcoder.jp/contests/abc065/tasks/abc065_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int a[n + 1];
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    int light = 1;
    int cnt = 0;

    for(int i = 0; i < n; i++) {
        light = a[light];
        cnt++;

        if(light == 2) {
            cout << cnt << '\n';
            return;
        }
    }

    cout << -1 << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
//Link: https://atcoder.jp/contests/abc468/tasks/abc468_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 0;

    for(int i = 0; i < n - 2; i++) {
        if(a[i] < a[i + 1] && a[i + 1] > a[i + 2]) {
            cnt++;
        }
    }

    cout << cnt << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
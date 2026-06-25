// Link: https://codeforces.com/problemset/problem/344/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int cnt = 1;
    for(int i = 1; i < n; i++) {
        if(a[i] != a[i - 1]) {
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
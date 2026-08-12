// Link: https://codeforces.com/problemset/problem/1462/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> b(n), a(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    int left = 0, right = n - 1;
    for(int i = 0; i < n; i++) {
        if(i % 2 == 0) {
            a[i] = b[left];
            left++;
        } else {
            a[i] = b[right];
            right--;
        }
    }

    for(int i = 0; i < n; i++) {
        cout << a[i] << ' ';
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
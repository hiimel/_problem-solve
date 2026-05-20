#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        for(int i = 1; i < n; i++) {
            if(a[i - 1] == a[i]) {
                cout << "YES" << '\n';
                break;;
            } else {
                cout << "NO" << '\n';
                break;;
            }
        }

    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
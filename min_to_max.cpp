// Link: https://www.codechef.com/practice/course/arrays/ARRAYS/problems/OPMIN

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int x = INT_MAX;
        vector<int> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];

            x = min(x, a[i]);

        }

        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(a[i] == x) {
                cnt++;
            }
        }

        cout << n - cnt << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
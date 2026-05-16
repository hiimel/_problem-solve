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

        int lar = INT_MIN;
        int second_lar = INT_MIN;

        for(int i = 0; i < n; i++) {
            if(a[i] > lar) {
                lar = a[i];
            }
        }

        for(int i = 0; i < n; i++) {
            if(a[i] > second_lar && a[i] != lar) {
                second_lar = a[i];
            }
        }

        cout << lar + second_lar << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
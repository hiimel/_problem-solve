// Link: https://codeforces.com/contest/2236/problem/A
#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int mx = INT_MIN;
    int min = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < n; i++) {
        if(a[i] > mx) {
            mx = a[i];
        }

        if(a[i] < min) {
            min = a[i];
        }
    }
    
    cout << mx - min + 1 << '\n';
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
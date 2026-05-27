// Link: https://www.codechef.com/START240D/problems/CYCYC

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    int min_el = INT_MAX;
    for(int i = 0; i < n; i++) {
        cin >> a[i];

        min_el = min(min_el, a[i]);
    }
  
    int cnt = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] == min_el) {
           cnt++; 
        }
    }

    if(cnt >= 2) {
        cout << "YES" << '\n';
    } else {
        cout << "NO" << '\n';
    }
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
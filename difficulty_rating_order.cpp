// Link: https://www.codechef.com/problems/RATINGINPRAC

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i]; 
    }

    if(n == 1) {
        cout << "YES" << '\n';
        return;
    }

    bool isSorted = true;
    for(int i = 0; i < n - 1; i++) {
        if(a[i] > a[i + 1]) {
            isSorted = false;
            break;
        }
    }

    if(isSorted) {
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
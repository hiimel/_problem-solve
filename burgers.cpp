// Link: https://www.codechef.com/problems/BURGERS

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int res;
    if(a == b) {
        res = b;
    } else if(b > a) {
        res = a;
    } else if(a > b) {
        res = b;
    }

    cout << res << endl;
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
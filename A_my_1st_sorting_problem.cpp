// Link: https://codeforces.com/contest/1971/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    if(x > y) {
        swap(y, x);
    }

    cout << x << " " << y << '\n';

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
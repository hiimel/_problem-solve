// Link: https://codeforces.com/contest/2254/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;

    int rounds = 0;
    if(a == b || a == c || b == c) {
        cout << 0 << "\n";
        return;
    }

    while(a != b && a != c && b != c) {
        int maxValue = max({a, b, c});
        int minValue = min({a, b, c});

        if(a == minValue) {
            a++;
        } else if(b == minValue) {
            b++;
        } else  {
            c++;
        }

        if(a == maxValue) {
            a--;
        } else if(b == maxValue) {
            b--;
        } else {
            c--;
        }

        rounds++;
    }

    cout << rounds << "\n";

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
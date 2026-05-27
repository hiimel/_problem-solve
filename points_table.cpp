// Link: https://www.codechef.com/START240D/problems/POINTT

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y, a, b;
    cin >> x >> y >> a >> b;

    if(x > a) {
        cout << "ALice" << '\n';
    } else if(a > x) {
        cout << "Bob" << '\n';
    } else {
        if(y > b) {
            cout << "Alice" << '\n';
        } else if(b > y) {
            cout << "Bob" << '\n';
        } else {
            cout << "Alice" << '\n';
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
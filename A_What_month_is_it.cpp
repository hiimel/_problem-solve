// Link: https://atcoder.jp/contests/abc420/tasks/abc420_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int res = a + b;

    if(res > 12) {
        cout << res - 12 << '\n'; 
    } else {
        cout << res << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
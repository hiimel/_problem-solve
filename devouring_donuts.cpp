// Link: https://www.codechef.com/problems/DEVDON?tab=ide

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x, y;
    cin >> x >> y;

    int cal = 0;
    for(int i = 0; i < x; i++) {
        cal += y;
    }

    cout << cal << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
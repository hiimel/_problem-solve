//Link: https://atcoder.jp/contests/abc465/tasks/abc465_a

#include<bits/stdc++.h>
using namespace std;

void solve() {
    int a, b;
    cin >> a >> b;

    int val = b * 2 / 3;
    if(a > val) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
// Link: https://atcoder.jp/contests/abc467/tasks/abc467_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int h, w;
    cin >> h >> w;

    int leftside = w * 400;
    int rightside = h * h;

    if(leftside >= rightside) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}
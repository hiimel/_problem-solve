// Link: https://atcoder.jp/contests/abc073/tasks/abc073_as

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int digit1 = n / 10;
    int xx = digit1 * 10;
    int digit2 = n - xx;

    if(digit1 == 9 || digit2 == 9) {
        cout << "Yes" << '\n';
    } else {
        cout << "No" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
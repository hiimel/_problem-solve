// Link: https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_d

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string res = "";
    for(int i = 0; i < 10; i++) {
        res = char('0' + (n % 2)) + res;
        n /= 2;
    }

    cout << res << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);

    solve();

    return 0;
}
//Link: https://atcoder.jp/contests/abc419/tasks/abc419_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    if(s == "red") {
        cout << "SSS" << '\n';
    } else if(s == "blue") {
        cout << "FFF" << '\n';
    } else if(s == "green") {
        cout << "MMM" << '\n';
    } else {
        cout << "Unknown" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
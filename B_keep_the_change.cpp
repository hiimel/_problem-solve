// Link: https://atcoder.jp/contests/abc467/tasks/abc467_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int lost_money = 0;
    for(int i = 0; i < n; i++) {
        int a, b;
        string s;

        cin >> a >> b >> s;

        if(s == "keep") {
            lost_money += (b - a);
        }
    }

    cout  << lost_money << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
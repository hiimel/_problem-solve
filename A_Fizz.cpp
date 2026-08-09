//Link: https://atcoder.jp/contests/abc470/tasks/abc470_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    for(int i = 1; i <=n; i++) {
        if(i % 3 == 0) {
            cout << "Fizz" << '\n';
        } else {
            cout << i << '\n';
        }
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    solve();

    return 0;
}
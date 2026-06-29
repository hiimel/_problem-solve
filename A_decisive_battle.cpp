// Link: https://atcoder.jp/contests/abc464/tasks/abc464_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int cntE = 0;
    int cntW = 0;

    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'E') {
            cntE++;
        } else {
            cntW++;
        }
    }

    if(cntE > cntW) {
        cout << "East" << '\n';
    } else {
        cout << "West" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
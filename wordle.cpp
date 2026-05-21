// Link: https://www.codechef.com/problems/WORDLE

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s, g;
    cin >> s >> g;

    string m = "";
    for(int i = 0; i < 5; i++) {
        if(s[i] == g[i]) {
            m += 'G';
        } else {
            m += 'B';
        }
    }

    cout << m << "\n";


}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
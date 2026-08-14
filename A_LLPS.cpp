// Link: https://codeforces.com/problemset/problem/202/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    char maxchars = *max_element(s.begin(), s.end());

    for(char ch: s) {
        if(ch == maxchars) {
            cout << ch;
        }
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
    return 0;
}
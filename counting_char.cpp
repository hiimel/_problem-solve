// Link: https://www.codechef.com/START240C/problems/COUNTAB

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int cnt_a = 0;
    int cnt_b = 0;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'a') {
            cnt_a++;
        } else if(s[i] == 'b'){
            cnt_b++;
        }
    }

    cout << cnt_a << " " << cnt_b << '\n';
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
#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int cnt = 0;

    while(1) {
        bool isfnd = false;

        for(int i = 0; i < s.length() - 1; i++) {
            if(s[i] == 'B' && s[i + 1] == 'W') {
                swap(s[i], s[i + 1]);
                cnt++;
                isfnd = true;
                break;
            }
        }

        if(!isfnd) {
            break;
        }
    }
    
    cout << cnt << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();

    return 0;
}
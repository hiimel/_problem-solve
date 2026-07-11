// Link: https://atcoder.jp/contests/abc466/tasks/abc466_a

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> x(n);
    for(int i = 0; i < n; i++) {
        cin  >> x[i];
    }

    bool isHappiness = true;
    for(int i = 0; i < n; i++) {
        if(x[i] >= 0) {
            isHappiness = false;
            break;
        }
    }

    if(isHappiness) {
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
// Link: https://codeforces.com/contest/978/problem/A

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> res;

    for(int i = 0; i < n; i++) {
        bool isFound = false;

        for(int j = i + 1; j < n; j++) {
            if(a[i] == a[j]) {
                isFound = true;
                break;
            }
        }

        if(isFound == 0) {
            res.push_back(a[i]);
        }
    }

    cout << res.size() << '\n';
    for(int i: res) {
        cout << i << " ";
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
// Link: https://atcoder.jp/contests/abc417/tasks/abc417_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;


    vector<int> a(n), b(m);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for(int i = 0; i < m; i++) {
        cin >> b[i];
    }

    for(int i= 0; i < m; i++) {
        vector<int>el;
        bool isEqual = false;

        for(int j = 0; j < a.size(); j++) {
            if(a[j] == b[i] && !isEqual) {
                isEqual = true;
                continue;
            }

            el.push_back(a[j]);
        }

        a = el;
    }

    for(int i = 0; i < a.size(); i++) {
        if(i > 0) {
            cout << " ";
        }

        cout << a[i];
    }

    if(a.size() > 0) {
        cout << '\n';
    }

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
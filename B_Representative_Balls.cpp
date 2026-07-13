// Link: https://atcoder.jp/contests/abc466/tasks/abc466_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> maxSize(m + 1, -1);

    for(int i = 0; i < n; i++) {
        int color, size;
        cin >> color >> size;

        maxSize[color] = max(maxSize[color], size);
    }

    for(int i = 1; i <= m; i++) {
        if(i > 1) {
            cout << " ";
        }

        cout << maxSize[i];
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve();
    
    return 0;
}
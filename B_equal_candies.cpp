// Link: https://codeforces.com/contest/1676/problem/B

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> a(n);;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min_val = *min_element(a.begin(), a.end());

    int total_candies = 0;
    for(int i = 0; i < n; i++) {
        total_candies += (a[i] - min_val);
    }

    cout << total_candies << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}
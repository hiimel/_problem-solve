// Link: https://atcoder.jp/contests/abc472/tasks/abc472_c

#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m, k;
    cin >> n >> m >> k;

    vector<long long> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    vector<long long> day(n, 0);

    long long sum = 0;
    for(int i = 0; i < n; i++) {
        if(i >= m) {
            sum -= day[i - m];
        }

        if(sum + arr[i] <= k) {
            cout << "Yes\n";

            day[i] = arr[i];
            sum += arr[i];
        } else {
            cout << "No\n";
            day[i] = 0;
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
    return 0;
}
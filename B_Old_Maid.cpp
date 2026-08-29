// Link: https://atcoder.jp/contests/abc473/tasks/abc473_b

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin  >> n;

    vector<int> A(n);
    for(int i = 0; i < n; i++) {
        cin >> A[i];
    }

    unordered_map<int, int> freq;
    for(auto x: A) {
        freq[x]++;
    }

    int sum = 0;
    for(auto p: freq) {
        int card = p.first;
        int cnt = p.second;

        if(cnt % 2 != 0) {
            sum += card;
        }
    }

    cout << sum << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
    return 0;
}
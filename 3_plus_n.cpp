#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void fast_io() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
}

int cycle(ll n) {
    int cnt = 1;

    while(n != 1) {
        if(n % 2 == 1) {
            n = 3 * n + 1;
        } else {
            n /= 2; 
        }

        cnt++;
    }

    return cnt;
}

int main() {
    fast_io();

    int a, b;

    while(cin >> a >> b) {
        int maxValue = 0;
        
        int st = min(a, b);
        int end = max(a, b);

        for(int i = st; i <= end; i++) {
            int res = cycle(i);
            maxValue = max(maxValue, res);
        }

        cout << a << " " << b  << " " << maxValue << '\n';
    }

    return 0;

}

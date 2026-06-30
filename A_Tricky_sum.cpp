//Link: https://codeforces.com/contest/598/problem/A

#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve() {
	ll n;
    cin >> n;

    ll total_sum = n * (n + 1) / 2;

    ll powerSum = 0;
    ll power = 1;

    while(power <= n) {
        powerSum += power;
        power *= 2;
    }

    cout << total_sum - 2 * powerSum << '\n';
}
 
signed main() {

#ifdef FELIX
	auto _clock_start = chrono::high_resolution_clock::now();
#endif
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
 
	int t;
    cin >> t;

    while(t--) {
        solve();
    }
 
#ifdef FELIX
	cerr << "Executed in " << chrono::duration_cast<chrono::milliseconds>(
		chrono::high_resolution_clock::now()
			- _clock_start).count() << "ms." << endl;
#endif
	return 0;
}
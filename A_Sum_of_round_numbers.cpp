//Link: https://codeforces.com/contest/1352/problem/A

#include <bits/stdc++.h>
using namespace std;

void work() {
    int n;
    cin >> n;

    vector<int> nums;
    int power = 1;

    while(n > 0) {
        int digit = n % 10;

        if(digit != 0) {
            int result = digit * power;
            nums.push_back(result);
        }

        n /= 10;
        power *= 10;
    }

    cout << nums.size() << '\n';

    for(int i: nums) {
        cout << i << " ";
    }

    cout << '\n';
}

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        work();
    }

    return 0;
}
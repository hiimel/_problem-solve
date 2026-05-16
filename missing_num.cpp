#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long sum = n * (n + 1) / 2;
    long long gvnNumSum = 0;
    vector<int> arr(n);
    for(int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        gvnNumSum += arr[i];
    }

    long long missing_num = sum - gvnNumSum;
    cout << missing_num << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int sz = accumulate(arr, arr + n, 0);

    vector<bool> dp(sz + 1, false);

    // Sum 0 is always possible: choose nothing
    dp[0] = true;

    for (int i = 0; i < n; i++) {

        // Go backwards so each element is used only once
        for (int sum = sz; sum >= arr[i]; sum--) {

            if (dp[sum - arr[i]]) {
                dp[sum] = true;
            }
        }
    }

    int count = 0;
    vector<int> ans;

    for (int sum = 1; sum <= sz; sum++) {
        if (dp[sum]) {
            count++;
            ans.push_back(sum);
        }
    }

    cout << count << '\n';

    for (int x : ans) {
        cout << x << " ";
    }
}
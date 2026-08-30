#include <bits/stdc++.h>
using namespace std;

#define ll long long

const int mod = 1e9+7;

int main ()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n ; cin>>n;
    int sum = n*(n+1)/2;

    if(sum%2 != 0){
        cout<<0;
        return 0;
    }

    int target_sum = sum/2;

    vector<ll> dp (target_sum+1, 0);
    dp[0]=1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = target_sum; j>=i ; j--)
        {
            dp[j] = (dp[j] + dp[j-i])%mod;
        }
        
    }

    int inverse_2 = 500000004;
    cout<<(dp[target_sum]*inverse_2)%mod;
    
}
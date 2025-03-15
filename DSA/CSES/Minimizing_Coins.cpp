#include<bits/stdc++.h>
using namespace std;

/*-------------------------------------------------      Macros     ----------------------------------------------------------*/
#define ll long long
#define iseven(n) (!((n) & 1)) // Checks if the last bit is 0 (Even)
#define isodd(n) ((n) & 1)     // Checks if the last bit is 1 (Odd)
#define loop(i, a, b) for (int i = (a); i < (b); i++) // Loop from a to b-1

int solve(int n, int ans, vector<int> &coins){
   // state : dp[k]:= min num of coins to make (K)
    vector<int>dp(ans+1, 1e9) ;
    // base condition
    dp[0] = 0; // when total amount is 0 we dont need any coins

    for(int k=1; k<=ans; k++){
        for(int i=0; i<n; i++){
            if(coins[i]<=k){
                dp[k] = min(dp[k-coins[i]]+1, dp[k]);
            }
        }
    }

    return (dp[ans]>= 1e9 ? -1 : dp[ans]);
}
int main(){
    int n, target; cin >>n>>target;
    vector<int> coins(n);
    loop(i, 0, n){
        cin>>coins[i];
    }

    cout<< solve(n, target, coins)<<endl;

    return 0;
}
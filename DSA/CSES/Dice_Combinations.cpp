#include<bits/stdc++.h>
using namespace std;

/*-------------------------------------------------      Macros     ----------------------------------------------------------*/
#define ll long long
#define iseven(n) (!((n) & 1)) // Checks if the last bit is 0 (Even)
#define isodd(n) ((n) & 1)     // Checks if the last bit is 1 (Odd)
#define loop(i, a, b) for (int i = (a); i < (b); i++) // Loop from a to b-1

const int MOD = 1e9 + 7;
/*------------------------------------------------     Helper Functions  -----------------------------------------------------*/
pair<vector<int>, int> iparr() { // taking array input
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return {arr, n};
}
void printArr(vector<int>arr, int s, int e){
    loop(i, s, e){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}
/***************************************************    START     ********************************************************** */
int main(){

    //take Input 
        int n; cin>>n;
    
    // Write Logic 
        vector<int> dp(n+1, 0);

        // state : dp[k] := no of ways to get total sum K (starting from 0)
        //base condition
        dp[0] = 1;

        // transition
        for(int k = 1; k<=n; k++){
            for(int i=1; i<=6; i++){
                if(i<=k){
                    dp[k] = (dp[k] + dp[k-i])%MOD ;
                }
            }
        }

        cout<<dp[n]<<endl;
}
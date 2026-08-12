#include <bits/stdc++.h>

using namespace std;

#define cin_2d(vec, n, m) for(int i = 0; i < n; i++) for(int j = 0; j < m && cin >> vec[i][j]; j++);
#define cout_2d(vec, n, m) for(int i = 0; i < n; i++, cout << "\n") for(int j = 0; j < m && cout << vec[i][j] << " "; j++);
#define fixed(n) fixed << setprecision(n)
#define ceil(n, m) (((n) / (m)) + ((n) % (m) ? 1 : 0))
#define fill(vec, value) memset(vec, value, sizeof(vec));
#define add_mod(a, b, m) (((a % m) + (b % m)) % m)
#define sub_mod(a, b, m) (((a % m) - (b % m) + m) % m)
#define mul_mod(a, b, m) (((a % m) * (b % m)) % m)
#define all(vec) vec.begin(), vec.end()
#define rall(vec) vec.rbegin(), vec.rend()
#define sz(x) int(x.size())
#define debug(x) cout << #x << ": " << (x) << "\n";
#define fi first
#define se second
#define ll long long
#define ull unsigned long long
#define MOD  1'000'000'007
#define OO 2'000'000'000
#define EPS 1e-9
#define PI acos(-1)
template < typename T = int > using Pair = pair < T, T >;
vector < string > RET = {"NO", "YES"};

template < typename T = int > istream& operator >> (istream &in, vector < T > &v) {
    for (auto &x : v) in >> x;
    return in;
}

template < typename T = int > ostream& operator << (ostream &out, const vector < T > &v) { 
    for (const T &x : v) out << x << ' '; 
    return out;
}


void Solve() {
    int n , m ; cin>>n>>m;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // state dp[i][v] : total no of valid ways (v) to put in i th place of array
    // transition : dp[i][j] = dp[i-1][j-1] + dp[i-1][j] + dp[i-1][j+1] ; 

    vector<vector<int>> dp(n, vector<int>(m+2, 0));
    
    // base case
    if(arr[0]==0){ // 0 3 4
        for (int i = 1; i <= m; i++)
        {
            dp[0][i] = 1;
        }
        
    }else{ // 4 0 0 3 4
        dp[0][arr[0]] = 1;
    }

    // Fill the DP table 
    for (int i = 1 ; i < n ; i++)
    {
        if(arr[i]==0){
            for (int j=1; j<=m ; j++)
            {
                dp[i][j] = dp[i-1][j]; // top
                if(j-1>=1) dp[i][j] = (dp[i][j] + dp[i-1][j-1])%MOD; // top-left
                if(j+1<=m) dp[i][j] = (dp[i][j] + dp[i-1][j+1])%MOD; // top-riight
            }
            
        }else{
            int j = arr[i];
            dp[i][j] = dp[i-1][j];
            if(j-1>=1) dp[i][j] = (dp[i][j] + dp[i-1][j-1])%MOD;
            if(j+1<=m) dp[i][j] = (dp[i][j] + dp[i-1][j+1])%MOD;
        }
    }

    // calculate the result : last row will have our reasult 
    int res = 0;
    for (int j = 1; j <= m; j++)
    {
        res = (res + dp[n-1][j])%MOD;
    }
    
    cout<<res;
}

int main(){
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
    int t = 1;
    // cin >> t;
    for(int tc = 1; tc <= t; tc++){
        // cout << "Case #" << tc << ": ";
        Solve();
    }
    return 0;
}
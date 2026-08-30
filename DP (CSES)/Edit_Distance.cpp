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

//-------------------
#define maxN 1000000
//--------------

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
   
    string src, dest;
    cin>>src>>dest;

    int n = dest.size();
    int m = src.size();
    // src X dest tabulation
    vector<vector<int>> dp (n+1, vector<int>(m+1, 0));

    // base case 

    dp[0][0]=0;
    for (int i = 1; i <= m; i++) // row 0 1 2 ...
    {
        dp[0][i] = dp[0][i-1] + 1;
    }
    for (int i = 1; i <= n; i++) // col 0 1 2 ...
    {
        dp[i][0] = dp[i-1][0] + 1;
    }
    
    //  transition
    for (int i = 1; i <= n; i++) //row
    {
        for(int j=1; j <= m; j++){ //col
            if(dest[i-1]==src[j-1]){
                dp[i][j] = dp[i-1][j-1];
            }else{
                dp[i][j] = min(min(dp[i][j-1], dp[i-1][j-1]), dp[i-1][j])+1;
            }
        }
    }


    cout<<dp[n][m];
    
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
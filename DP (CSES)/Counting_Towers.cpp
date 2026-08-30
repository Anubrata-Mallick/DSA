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
    // dp [height] [width]
    // dp[i][1] : no of ways to make tower with height i ending with block width 1
    // dp[i][2] : no of ways to make tower with height i ending wirh block width 2

    vector<vector<ll>> dp (maxN+1, vector<ll>(3, 0));

    dp[1][1] = 1; 
    dp[1][2] = 1;

    //pre compute all the possible numbers 
    for (int i = 2; i <= maxN; i++)
    {
        dp[i][1] = (4*dp[i-1][1] + dp[i-1][2])%MOD;
        dp[i][2] = (2*dp[i-1][2] + dp[i-1][1])%MOD;
    }

    // taking input and lookup to the precomputed table
    int t ; cin>>t;
    for(int i =0; i<t; i++){
        int h ;
        cin>>h;
        ll ans = (dp[h][1] + dp[h][2])%MOD;
        cout<<ans<<endl;
    }
    
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
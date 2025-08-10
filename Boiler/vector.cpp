// ================= TYPEDEFS =================
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;

// ================= VECTOR UTILITIES =================

// Print a vector
template <typename T>
void printVec(const vector<T> &v, const string &sep = " ") {
    for (size_t i = 0; i < v.size(); ++i) {
        cout << v[i] << (i + 1 == v.size() ? "" : sep);
    }
    cout << "\n";
}

// Input a vector
template <typename T>
void readVec(vector<T> &v, int n) {
    v.resize(n);
    for (int i = 0; i < n; ++i) cin >> v[i];
}

// Prefix sums
template <typename T>
vector<T> prefixSums(const vector<T> &v) {
    vector<T> pref(v.size() + 1, 0);
    for (size_t i = 0; i < v.size(); ++i) {
        pref[i + 1] = pref[i] + v[i];
    }
    return pref;
}

// Suffix sums
template <typename T>
vector<T> suffixSums(const vector<T> &v) {
    vector<T> suff(v.size() + 1, 0);
    for (int i = (int)v.size() - 1; i >= 0; --i) {
        suff[i] = suff[i + 1] + v[i];
    }
    return suff;
}

// Frequency map (unordered)
template <typename T>
unordered_map<T, int> freqMap(const vector<T> &v) {
    unordered_map<T, int> freq;
    for (auto &x : v) freq[x]++;
    return freq;
}
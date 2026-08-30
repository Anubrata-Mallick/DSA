/*
@ Number of Minimums on a Segment

URL : https://codeforces.com/edu/course/2/lesson/4/1/practice/contest/273169/problem/C
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

struct Node{
    ll mn; // min val
    ll cnt; // occurence
};

class SegmentTree{
private:
    vector<Node> segTree;
    vector<ll> arr;
    int n;

    Node mergeNode(const Node &a, const Node &b){
        if(a.mn < b.mn) return a;
        if(b.mn < a.mn) return b;
        return {a.mn, a.cnt + b.cnt};
    }

    void buildTree(int idx, int l, int r){
        if(l == r){
            segTree[idx] = {arr[l], 1};
            return;
        }

        int mid = (l + r) / 2;

        buildTree(2 * idx + 1, l, mid);
        buildTree(2 * idx + 2, mid + 1, r);

        segTree[idx] = mergeNode(
            segTree[2 * idx + 1],
            segTree[2 * idx + 2]
        );
    }

    Node query(int idx, int l, int r, int ql, int qr){
        // No overlap
        if(ql > r || qr < l)
            return {INT_MAX, 0};

        // Complete overlap
        if(ql <= l && r <= qr)
            return segTree[idx];

        // Partial overlap
        int mid = (l + r) / 2;

        Node left_res = query(2 * idx + 1, l, mid, ql, qr);

        Node right_res = query(2 * idx + 2, mid + 1, r, ql, qr);

        return mergeNode(left_res, right_res);
    }

    void update(int idx, int l, int r, int pos, ll val){
        if(l == r){
            segTree[idx] = {val, 1};
            arr[l] = val;
            return;
        }

        int mid = (l + r) / 2;

        if(pos <= mid)
            update(2 * idx + 1, l, mid, pos, val);
        else
            update(2 * idx + 2, mid + 1, r, pos, val);

        segTree[idx] = mergeNode(
            segTree[2 * idx + 1],
            segTree[2 * idx + 2]
        );
    }

public:
    SegmentTree(const vector<ll>& input){
        n = input.size();
        arr = input;
        segTree.resize(4 * n);
        buildTree(0, 0, n - 1);
    }

    Node getValue(int l, int r){
        return query(0, 0, n - 1, l, r);
    }

    void setValue(int pos, ll val){
        update(0, 0, n - 1, pos, val);
    }
};

void Solve(){
    ll n, m;
    cin>>n>>m;

    // fill the array
    vector<ll>arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    //build the Segment Tree
    SegmentTree st(arr);

    // fill the querry
    ll op, a , b;
    for (ll i = 0; i < m; i++)
    {
        cin>>op>>a>>b;
        switch (op)
        {
        case 1: // update querry
            st.setValue(a, b);
            break;
        
        case 2:
            Node ans = st.getValue(a, b-1);
            cout<< ans.mn << " " << ans.cnt << endl;
            break;
        }
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
#include<bits/stdc++.h>
using namespace std;

/*-------------------------------------------------      Macros     ----------------------------------------------------------*/
#define ll long long
#define iseven(n) (!((n) & 1)) // Checks if the last bit is 0 (Even)
#define isodd(n) ((n) & 1)     // Checks if the last bit is 1 (Odd)
#define loop(i, a, b) for (int i = (a); i < (b); i++) // Loop from a to b-1

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

/***************************************************    START     ********************************************************** */
int main(){
    int t; cin >> t;
    while(t--){

    //take Input 
        ll n, k; cin >> n >> k;
    
    // Write Logic 
        // if(iseven(k)){
        //     if(iseven(n)){cout<<"YES"<<endl;}
        //     else{cout<<"NO"<<endl;}
        // } // it is told tht n>=k so we dont need to handle n<k
        // else{
        //     cout<<"YES"<<endl;
        // }
        if(iseven(n) || iseven(n-k)) cout << "YES" <<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
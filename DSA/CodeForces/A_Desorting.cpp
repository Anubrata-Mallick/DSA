#include<bits/stdc++.h>
using namespace std;

/*-------------------------------------------------      Macros     ----------------------------------------------------------*/
#define iseven(n) (!((n) & 1)) // Checks if the last bit is 0 (Even)
#define isodd(n) ((n) & 1)     // Checks if the last bit is 1 (Odd)
#define loop(i, a, b) for (int i = (a); i < (b); i++) // Loop from a to b-1
#define ll long long

/*------------------------------------------------     Helper Functions  -----------------------------------------------------*/
vector<ll> iparr() { // taking array input
    ll n; cin >> n;
    vector<ll> arr(n); 
    for (ll i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

/***************************************************    START    ********************************************************** */
int main(){
    int t; cin >> t;
    restart:
    while(t--){

    //take Input 
        vector<ll> arr = iparr();
    
    // Write Logic 
        ll min_diff = INT_MAX;

        loop(i, 0, arr.size()-1){
            if(arr[i] > arr[i+1]){cout<<0<<endl;goto restart;} // array is unsorted ==> no need to perform any operation
            else{
                min_diff = min(min_diff, (arr[i+1]-arr[i]));
            }
        }

        min_diff==0? cout<<1<<endl : cout<<(min_diff/2)+1<<endl;
    }
    return 0;
}

/*
1 9 14 
=> 8, (5)-> 3{10 13} -> 1 {11 12} -> X {12 11}
---> total 3 op when () is ODD --> 5/2 +1

1 9 15
=> 8, (6) -> 4 {10 14}-> 2 {11 13}-> 0 {12 12}-> X {13 11}
---> total 4 op when () is EVEN --> 6/2 +1
*/
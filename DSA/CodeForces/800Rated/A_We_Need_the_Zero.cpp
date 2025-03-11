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
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count()); 

int getRand(int l, int r) {
    return uniform_int_distribution<int>(l, r)(rng);
}
/***************************************************    START     ********************************************************** */
int main(){
    int t; cin >> t;
    while(t--){

    //take Input 
        auto[arr, n] = iparr();
    
    // Write Logic 
        int sum_el = 0;
        loop(i, 0, n){
            sum_el ^=arr[i];
        }
        if(iseven(n)){
            sum_el == 0 ? cout<<getRand(1, 4)<<endl : cout<<-1<<endl;
        }else{
            cout<<sum_el<<endl;
        }
    }
    return 0;
}
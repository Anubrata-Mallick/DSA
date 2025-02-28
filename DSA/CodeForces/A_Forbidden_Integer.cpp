#include<bits/stdc++.h>
using namespace std;

/*-------------------------------------------------      Macros     ----------------------------------------------------------*/
#define iseven(n) (!((n) & 1)) // Checks if the last bit is 0 (Even)
#define isodd(n) ((n) & 1)     // Checks if the last bit is 1 (Odd)
#define loop(i, a, b) for (int i = (a); i < (b); i++) // Loop from a to b-1

/*------------------------------------------------     Helper Functions  -----------------------------------------------------*/
vector<int> iparr() { // taking array input
    int n; cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

/***************************************************    START     ********************************************************** */
int main(){
    int t; cin >> t;
    while(t--){

    //take Input 
    int n, k, x; cin >>n>>k>>x;
    
    // Write Logic 
        if(x!=1){
            cout<<"YES" <<endl;
            cout << n << endl; // print array size
            loop(i, 0, n) cout << 1 << " "; // all will be 1
            cout <<endl;
        }else{
            if(k>=3){
              cout<<"YES" <<endl;
              // 11 -> five 2s and one 3
              
            }
        }

    }
    return 0;
}
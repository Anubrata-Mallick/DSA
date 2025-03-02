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
        vector<int> arr = iparr();
    
    // Write Logic 
        int n = arr.size();

        loop(i, 0, n){
            cout << (n-arr[i])+1 <<" ";
        }

        cout<< endl;
    }
    return 0;
}
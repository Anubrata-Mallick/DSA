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
        auto[arr, n]= iparr();
    
    // Write Logic 
        ll mx_blank = 0;
        ll curr_blank = 0;
        loop(i, 0, n){
            arr[i]==0 ? curr_blank++ : (mx_blank = max(mx_blank, curr_blank), curr_blank = 0);
        }
        mx_blank = max(mx_blank, curr_blank);

        cout << mx_blank << endl;
    }
    return 0;
}
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
        int n_num=0, p_num=0;
        loop(i, 0, arr.size()){
            arr[i]==1 ? p_num++ : n_num++ ;
        }

        int op = 0;
        while(p_num<n_num || isodd(n_num)){
            op++;
            p_num++; n_num--;
        }

        cout << op << endl;
    }
    return 0;
}
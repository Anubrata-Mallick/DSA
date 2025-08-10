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

    string s; ll n = 0;
    cin >>n>>s;

    // Write Logic 
        ll ans = n;

        ll f=0, l=n-1;
        while(f<=l){
            if(s[f] != s[l]){ ans-=2 ;}
            else{break;}
            f++;l--;
        }

        cout<<ans<<endl;
    }
    return 0;
}

/*
10(11)10
1(1)0
*/
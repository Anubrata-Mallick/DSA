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
        int n, k; cin>>n>>k;
    
    // Write Logic 
        if(n%k == 0){
            cout<<2<<endl;
            n>0 ? cout << n-1 << " "<< 1 <<endl : cout << n+1 << " "<< -1 <<endl;
        }else{
            cout<<1<<endl;
            cout<<n<<endl;
        }
    }
    return 0;
}

/*
grasshoper will take the maximum jump it can .

n % k == 0 : jumps are (n - 1) and 1
n % k != 0 : jump is n itself

eg : 11 4 : 11 can not be divided by 4 so grasshoper can jump 11 distance at once
eg : 10 2 : 10 is divisible by 2 so grasshoper will jump : (10-1)(max jump) and 1 
eg : 03 5 : 03 is not divisible by 5 so grasshoper will jump 3 at once
*/
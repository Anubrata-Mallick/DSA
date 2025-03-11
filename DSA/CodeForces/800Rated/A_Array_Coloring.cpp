#include<bits/stdc++.h>
using namespace std;

//Macros
#define iseven(n) (!((n) & 1)) // Checks if the last bit is 0 (Even)
#define isodd(n) ((n) & 1)     // Checks if the last bit is 1 (Odd)
#define loop(i, a, b) for (int i = (a); i < (b); i++) // Loop from a to b-1

// Helper Functions
vector<int> iparr() { // taking array input
    int n; cin >> n;
    vector<int> arr(n); 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    return arr;
}

int main(){
    int t; cin >> t;

    while(t--){
        vector<int> arr = iparr();

        int odd_count = 0;
        loop(i, 0, arr.size()){
            if(isodd(arr[i]))odd_count++;
        }

        iseven(odd_count)?cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}


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
void printArr(vector<int>arr, int s, int e){
    loop(i, s, e){
        cout<< arr[i] << " ";
    }
    cout<<endl;
}
bool isround(int num){
    string s = ""+num;
    loop(i, 1, s.size()){
        if(s[i]!=0){
            return false;
        }
    }
    return true;
}
/***************************************************    START     ********************************************************** */
int main(){

    /*      PRECOMPUATION    */
    vector<int> roundNumber = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    loop(i, 10, 999999){
        if(isround(i)){
            roundNumber.push_back(i);
        }
    }
    int t; cin >> t;
    while(t--){

    //take Input 
        int n ; cin>>n;
    
    // Write Logic 
        int count = 0;
        loop(i, 0, roundNumber.size()){
            if(roundNumber[i]<=n){
                count++;
            }
            if(roundNumber[i]>n) break;
        }

        cout<<count<<endl;
    }
    return 0;
}
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
/***************************************************    START     ********************************************************** */
int main(){
    int t; cin >> t;
    while(t--){

    //take Input 
        int n, a, b;
        cin>>n>>a>>b;
    
    // Write Logic 
        if( ((n==a)&&(a== b)) || (n>=(a+b+2)) ){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}
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
        if(x != 1){
            cout << "YES"<<endl;
            cout<<n<<endl;
            loop(i, 0, n) cout << 1 << " ";
            cout<< endl;
        }else{
            if(k == 1){
                cout << "NO" << endl;
            }else if( k==2 ){
                if(iseven(n)){
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    loop(i, 0, n/2) cout << 2 <<" ";
                    cout<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }else{
                cout<<"YES"<<endl;
                if(iseven(n)){
                    cout<<n/2<<endl;
                    loop(i, 0, n/2) cout << 2 <<" ";
                    cout<<endl;
                }
                else{
                    n==3 ? cout<<1<<endl : cout << 1 + ((n-3)/2)<<endl;
                    cout <<3<<" ";
                    loop(i, 0, (n-3)/2) cout << 2 <<" ";
                    cout<<endl;
                }
            }

        }
    }
    return 0;
}

/*
if x is not 1 (1 is available in series) -> can make any number by adding 1s 
if x is 1 ( 1 is not available in series )
    -> (k == 1) -> there is no element so "NO"
    -> (k == 2) -> only 2 present so "YES" for even "NO" for odd
    -> (k == 3) -> "YES" because we can make any number using 2,3 / to make even numer just use 2 / to make odd number start with 3 and add 2s
*/
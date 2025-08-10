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
        auto[arr, n] = iparr();
    
    // Write Logic 
        int no_two = 0, no_one=0;
        loop(i, 0, n){
            arr[i]==1?no_one++ : no_two++;
        }

        if(no_two==0){
            cout<<1<<endl;
        }else{
            if(iseven(no_two)){
                int count = 0; int pos = -1;
                loop(i, 0, n){
                    if(count == no_two/2){pos = i ; break;}
                    if(arr[i]==2) count++;
                }
                cout<<pos<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}
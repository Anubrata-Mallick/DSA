#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n ; cin>>n;
        vector<int> b(n), a;

        for(int i =0; i<n; i++){
            cin>>b[i];
        }

        // Solution
        // Statement : if b[i] is bigger than its previous element then Okay . Else we need to add the same element before b[i]
        a.push_back(b[0]);
        for(int i=1; i<n; i++){
            if(b[i]>=b[i-1]){a.push_back(b[i]);}
            else{
                a.push_back(b[i]); a.push_back(b[i]);
            }
        }

        cout<< a.size() << endl;
        for(auto el: a){
            cout << el<< " ";
        }
        cout<<endl;
    }
    return 0;
}

// Question Simplify :
// a[] = {a1, a2, a3, .... , am} ------ > b[] = {ax where ax is bigger number than previous} 
// given b ; find a


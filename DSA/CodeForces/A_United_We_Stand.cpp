#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int n; cin >> n;
        vector<int> a(n), b, c;

        for(int i =0; i<n; i++){
            cin >> a[i];
        }

        // solution
        int mx = *max_element(a.begin(), a.end());
        for(auto el : a){
            if(el != mx){b.push_back(el);}
            else{c.push_back(el);}
        }

        if(b.size() == 0){cout<< -1 <<endl; continue;} // size of b = 0 iff all the element are same 

        cout<<b.size()<<" "<<c.size() << endl;
        for(auto el : b){
            cout << el << " ";
        }
        cout<<endl;
        for(auto el : c){
            cout << el << " ";
        }
        cout<<endl;
    }
    return 0;
}
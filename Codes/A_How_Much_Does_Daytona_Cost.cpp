#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        long long n, k;
        cin >> n >> k;
        int arr[n];

        for(int i =0; i<n; i++){
            cin >> arr[i];
        }

        bool flag = false;
        for(int i =0; i<n; i++){
            if(arr[i]==k){flag = true;break;}
        }
        
        flag?cout<<"YES"<<endl:cout << "NO" << endl;
    }
    return 0;
}
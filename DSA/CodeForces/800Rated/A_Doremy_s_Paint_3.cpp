#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        // taking inputs
        long long n;
        cin >> n;
        vector<long long>v(n);

        for(long long i=0; i<n; i++){
            cin >> v[i];
        }

        // Actual logic
        map<long long, long long> freq_map;;
        for(long long i =0; i<n; i++){
            freq_map[v[i]]++;
        }

        if(freq_map.size()>=3){
            cout<<"No"<<endl;
        }
        else{
            long long freq_1 = freq_map.begin()->second;
            long long freq_2 = freq_map.rbegin()->second;

            if(freq_1==freq_2){
                cout<<"Yes"<<endl;
            }
            else if(n&1 && abs(freq_1-freq_2)==1){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
    return 0;
}

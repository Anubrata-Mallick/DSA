#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n ; cin >> n;
    long long arr[n];

    for(int i =0; i<n; i++){
        cin>>arr[i];
    }

    long long min_num = INT_MAX;
    for(int i =0; i<n; i++){
        min_num = min(min_num, abs(arr[i]));
    }

    cout<< min_num << endl;
    return 0;
}
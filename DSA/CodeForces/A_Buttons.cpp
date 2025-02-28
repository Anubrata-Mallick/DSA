#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;

    while(t--){
        int a, b, c;
        cin >>a>>b>>c;

        a += ceil(c/2.0);
        b += (c - ceil(c/2.0));// for safety always use floating point in case of celing and floor value
        if(a>b)cout<<"First"<<endl;
        else cout<<"Second"<<endl;
    }
    return 0;
}
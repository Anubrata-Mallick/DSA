#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	string s ; cin >> s;
	bool c=false, a=false, t=false;
	
	for(char ch: s){
	    if(ch != 'c' && ch != 'a' && ch != 't' ) {cout << "No"<<endl; return 0;}
	    else if(ch=='c'){ c = true;}
	    else if(ch=='a') {a = true;}
	    else if(ch== 't') {t = true;}
	}
	
	if(c&&a&&t) cout<< "Yes";
	else{
	    cout<<"No";
	}
	
	return 0;

}

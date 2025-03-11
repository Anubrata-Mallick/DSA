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
        ll sx,sy,dx,dy ;
        cin >>sx>>sy>>dx>>dy;
    
    // Write Logic 
        if(dy <sy){
            cout<<-1<<endl;
        }
        else{
            ll steps = 0;
            steps += dy-sy; //reached to the same y level ------(dy)---------(sy)----- perform 1st op
            ll currX = sx+steps;
            if(currX < dx){
                cout << -1 <<endl;
            }else{
            steps += currX-dx; // perform 2nd op
            cout<<steps<<endl;
            }
        }
    }
    return 0;
}

/*
if dy < sy ==> it is imposssible to reach because we cant lower the y
if dy >= sy ==> perform 1st op for (dy-sy)times
----- > we now reached at the dy level , but it will also change the x
       now calculate the distance between the dx and current x 
       perform the 2nd operation that much time
*/
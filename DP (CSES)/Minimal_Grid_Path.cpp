#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ; cin >> n ;

    vector<string> grid(n);
    for(int i=0; i<n; i++){
        cin>>grid[i];
    }


    string ans ;
    ans += grid[0][0];

    vector<pair<int, int>> curr;
    curr.push_back({0, 0});

    for (int i = 1; i <= 2*n-2; i++)
    {
        /* code */
        char best = 'Z'+1;
        for(auto [i, j]: curr){ // find the min char from down or right
            if(i+1<n) best = min(best , grid[i+1][j]);
            if (j+1<n) best = min(best, grid[i][j+1]);
        }

        ans += best;

        vector<pair<int, int>> nxt; 
        for(auto [i, j]: curr){ // keep track of the next move : 
            if(i+1<n && grid[i+1][j]==best)nxt.push_back({i+1, j});
            if(j+1<n && grid[i][j+1]==best)nxt.push_back({i, j+1});
        }

        // remove duplicate as one position can be refered from 2 positon 
        sort(nxt.begin(), nxt.end());
        nxt.erase(
            unique(nxt.begin(), nxt.end()),
            nxt.end()
        );

        // now current comes to next step
        curr = move(nxt);

    }

    cout<<ans;
}

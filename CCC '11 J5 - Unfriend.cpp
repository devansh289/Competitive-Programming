/* INIT */

#include <bits/stdc++.h>
using namespace std;

#define print(val) cout<<#val<<": "<<val<<"\n"
#define print1dVec(vec) cout<<#vec<<": ";for(auto val: vec){cout << val << " ";}
#define print2dVec(vec) cout<<#vec<<":"<<"\n"; for(auto row: vec){for (auto val: row){cout << val << " ";}cout << "\n";}

#define exists(s, e) (s.find(e)!=s.end())
#define forElse(i,a,b) for (int i = a; i < b; i++)
#define for1(i, b) for (int i = 1; i <= b; i++)
#define for0(i, b) for (int i = 0; i < b; i++)

#define mem(a,v) memset(a,v,sizeof(a))
#define clearVec(name,size) for(int __i__ = 0; __i__ < size; __i__++) {name[__i__].clear();}

#define sz(a) ((int) (a).size())
#define nl "\n"

#define vi vector<int>

#define MX 10


/******************************************************************************************************************/

int connect[MX];


int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    int N;
    cin >> N;
    
    fill_n(connect,MX,1);

    for1(i,N-1){
        int temp;
        cin >> temp;
        connect[i]++;
        connect[temp] *= connect[i];
    }
    
    cout << connect[N];
    
}


/******************************************************************************************************************/

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

#define MX 105


/******************************************************************************************************************/

/*VAR*/


vi matrix[MX];
int v[MX];

int dis[MX];
int disMax;
    




/******************************************************************************************************************/

/*FUNCTION*/


void dfs(int cur, int pre){
    dis[cur] = dis[pre] + 1;
    v[cur] = 1;

    for(int k: matrix[cur]){
        if (v[k] == 1){
            disMax = max(disMax, dis[cur] - dis[k] +1);
          
        }else if (v[k] == 0){
            dfs(k,cur);
        }
    }
}




/******************************************************************************************************************/


/* MAIN */

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
    for1(i,5){
        
        mem(v,0);
        mem(dis,0);
        clearVec(matrix,MX);
        disMax = 0;
        
        int numNode;
        cin >> numNode;
        
        for1(j,numNode){
            int a,b;
            cin >> a>>b;
            matrix[a].push_back(b);
        }
        
        dfs(1,0);
        cout << disMax << nl ;
    }
}


/******************************************************************************************************************/

    #include <bits/stdc++.h>
    using namespace std;
    
    #define printLine(l) for(int __i__=0;__i__<l;__i__++){cout<<"-";}cout<<endl
    #define printLine2(l,c) for(int __i__=0;__i__<l;__i__++){cout<<c;}cout<<endl
    #define printVar(n) cout<<#n<<": "<<n<<endl
    #define printArr(a,l) cout<<#a<<": ";for(int __i__=0;__i__<l;__i__++){cout<<a[__i__]<<" ";}cout<<endl
    #define print2dArr(a,r,c) cout<<#a<<":\n";for(int __i__=0;__i__<r;__i__++){for(int __j__=0;__j__<c;__j__++){cout<<a[__i__][__j__]<<" ";}cout<<endl;}
    #define print2dArr2(a,r,c,l) cout<<#a<<":\n";for(int __i__=0;__i__<r;__i__++){for(int __j__=0;__j__<c;__j__++){cout<<setw(l)<<setfill(' ')<<a[__i__][__j__]<<" ";}cout<<endl;}
    
    
    #define exists(s, e) (s.find(e)!=s.end())
    #define forElse(i,a,b) for (int i = a; i < b; i++)
    #define for1(i, b) for (int i = 1; i <= b; i++)
    #define for0(i, b) for (int i = 0; i < b; i++)
    
    #define sz(a) ((int) (a).size())
    #define nl "\n"
    
    #define vi vector<int>
    #define pb push_back
    
    #define MAXN = 105
    
    int n,m,a,b;
    vi grid[2100];
    bool visited[2100];
    
    queue <int> q;
    bool pos = 0;
    
    void bfs(int start){
        q.push(start);
        
        while (!q.empty()){
            
            int current = q.front();
            q.pop();
            
            visited[current] = 1;
            
            for(auto i : grid[current]){
                
                if (visited[i] == 0){
                    q.push(i);
                }
            }
            
            if (current == b) {
                pos = 1;
            }
            
        }
        
    }
    
    
    int main() {
        ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        cin >> n >> m >> a >> b;
    
        for1(i,m){
            int tempHead, tempNode;
            cin >> tempHead >> tempNode;
    
            grid[tempHead].pb(tempNode);
            grid[tempNode].pb(tempHead);
        }
        
        bfs(a);
        
        if (pos == 0){
            cout << "NO SHAHIR!";
        } else {
            cout << "GO SHAHIR!";
        }
        
    }
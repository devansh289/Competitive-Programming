#include <bits/stdc++.h>
using namespace std;

vector<vector <int>> a = {{},{2,3},{4,5},{},{6},{},{}};
bool visited[7];

stack<int> s;

void dps(int start){
    s.push(start);
    visited[start] = 1;
    
    while (!s.empty()){
        int current = s.top(); s.pop();
        visited[current]= 1;
        
        cout << current;
        
        for (auto i: a[current]){
            if (visited[i] != 1){
                s.push(i);
            }
        }
        
        
    }
    
}


int main()
{
    cout<<"Hello World";
    dps(1);
    return 0;
}

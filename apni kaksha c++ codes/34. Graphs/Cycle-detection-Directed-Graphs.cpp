#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=a;i<b;i++)
#define ff first
#define ss second 
#define setBits(x) builtin_popcount(x)

const int N = 1e5+2, MOD = 1e9+7;

bool iscycle(int src, vvi &adj, vector<bool> &visited,vi &stack)
{
    stack[src] = 1;
    if(!visited[src]){
        visited[src] = true;
        for(auto &i: adj[src])
        {
            if(!visited[i] && iscycle(i,adj,visited,stack))
                return true;
            if(stack[i])
                return true;
        }
    }
    stack[src] = 0;
    return false;
}

int main()
{
    int n,m; cin>>n>>m;
    int cnt = 0;
    vector<vector<int>> adj(n);
    for(int i =0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
    }
    bool cycle = false;
    vector<int> stack(n,0);
    vector<bool> visited(n,0);
    for(int i = 0 ; i < n; i++)
    {
        if(!visited[i] and iscycle(i,adj,visited,stack))
            cycle = true;
    }

    if(cycle)
        cout<<"Cycle is present\n";
    else
    {
        cout<<"Cycle is not present\n";
    }
    return 0;
}
//Check whether a graph is bipartite 
//by 2-coloring graph
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

vvi adj;
vector<bool> visited;
vi color;
bool bipartite = true;

//curr-> stores the color we want to assign
void colored(int u, int curr)
{
    if(color[u] != -1 and color[u]!=curr)
    {
        bipartite = false;
        return;
    }
    color[u] = curr;
    if(visited[u])
        return;         
    visited[u] = true;
    for(auto &i: adj[u])
    {
        (curr) ? colored(i,0) : colored(i,1);
    }
}

int main()
{
    int n,m; cin>>n>>m;
    adj = vvi(n);
    visited = vector<bool>(n,false);
    color = vi(n,-1);
    for(int i =0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    
    for(int i=0;i<n;i++)
    {
        if(!visited[i])
            colored(i,0);
    }
        
    if(bipartite)
        cout<<"Graph is Bi-partite";
    else
        cout<<"Graph is not Bi-partite";
    return 0;
}
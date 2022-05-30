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
vi components;
vector<bool> visited;

int get_comp(int index)
{
    if(visited[index])
        return 0;
    visited[index] = true;
    int ans = 1;
    for(auto &i: adj[index])
    {
        if(!visited[i])
        {
            ans += get_comp(i);
            visited[i] = true;
        }
    }
    return ans; 
}

int main()
{
    int n,m; cin>>n>>m;
    adj = vvi(n);
    visited = vector<bool>(n);
    for(int i =0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i =0;i<n;i++)
    {
        if(!visited[i])
        {
            components.push_back(get_comp(i));
        }
    }
    for(auto &i: components)
        cout<<i<<" ";

    //here we can further elaborate the solution of connected components as
    // if we need to find the 2 pairs such that both pairs must not be connected together
    //we have to find the number of such pairs that exist
    long long ans = 0;
    for(auto &i: components)
        ans += i*(n-i);
    cout<<(ans/2)<<endl;//because we have counted each pair forward and backward (3 , 2) && (2 , 3)
    
    return 0;
}
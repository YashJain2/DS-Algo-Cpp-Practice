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


int main()
{
    int n,m; cin>>n>>m;
    int cnt = 0;
    vector<vector<int>> adj(n);
    vector<int> indegree(n,0);
    for(int i =0;i<m;i++)
    {
        int x,y; cin>>x>>y;
        adj[x].push_back(y);
        indegree[y]++;
    }
    queue <int> pq;
    for(int i =0;i<n;i++)
    {
        if(indegree[i]==0)
            pq.push(i);
    }

    while(!pq.empty())
    {
        cnt++;
        int x = pq.front();
        pq.pop();
        //Topological Sort Order
        cout<<x<<" ";
        vector<int> :: iterator it;
        for(it = adj[x].begin();it!=adj[x].end();it++)
        {
            indegree[*it]--;
            if(indegree[*it]==0)
                pq.push(*it);
        }
    }
    return 0;
}
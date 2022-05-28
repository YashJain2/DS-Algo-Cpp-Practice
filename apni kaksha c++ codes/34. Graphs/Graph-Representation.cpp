#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define vvi vector<vi>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i=1;i<b;i++)
#define ff first
#define ss second 
#define setBits(x) builtin_popcount(x)

const int N = 1e5+2, MOD = 1e9+7;

//representation of graphs

int main()
{
    //n->nodes m->edges
    int n,m;
    cin>>n>>m;
    // vvi adjmatrix(n+1,vi(n+1,0));
    // rep(i,0,m)
    // {
    //     int x,y; cin>>x>>y;
    //     adjmatrix[x][y] = 1;
    //     adjmatrix[y][x] = 1;
    // }

    // cout<<"Adjacency Matrix\n";
    // rep(i,0,n+1)
    // {
    //     rep(j,0,n+1)
    //         cout<<adjmatrix[i][j]<<" ";
    //     cout<<"\n";
    // }

    // cout<<endl<<endl;

    //Adjacency List
    vi adj[N];
    rep(i,0,m)
    {
        int x,y;cin>>x>>y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    cout<<"Adjacency List\n";
    rep(i,1,n+1)
    {
        cout<< i << "->";
        for(auto x: adj[i])
            cout<<x <<" ";
        cout<<endl;
    }

    return 0;
}
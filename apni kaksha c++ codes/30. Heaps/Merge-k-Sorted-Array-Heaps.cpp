#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define pii pair<int,int>
#define vii vector<pii>
#define rep(i,a,b) for(int i =a;i<b;i++)
#define ff first
#define ss second
#define setBits(x) builtin_popcount(x)

signed main()
{
    //input of k sorted array is stored in 2-D Vector
    int k; cin>>k;
    vector<vector<int>> a(k);
    rep(i,0,k)
    {
        //size od each array
        int size; cin>>size;
        a[i] = vector<int>(size);
        //array inputs
        rep(j,0,size)
            cin>>a[i][j];
    }
    //intializing the vector to store k-arrays element position
    //initializing them to 0 at first
    vector<int> idx(k,0);
    //declaring the min-heap to store the 1 element from each array with their array number at a time
    priority_queue<pii,vector<pii>,greater<pii>> pq;

    // storing the first array element with their array no.
    rep(i,0,k)
    {
        pii p ;
        p.ff = a[i][0];
        p.ss = i;
        pq.push(p);
    }
    //storing the answer
    vi ans;

    while(!pq.empty())
    {
        // storing the top element from min-heap to a pair with their array number
        pii x = pq.top();
        pq.pop();
        ans.push_back(x.ff);
        //x.ss -> array number (0-indexing)
        //x.ff -> contains the minimum element
        //we compare the array number is not greater than the number of arrays present
        if((idx[x.ss]+1) < a[x.ss].size())
        {
            pii temp;
            temp.ff = a[x.ss][idx[x.ss]+1] ;
            temp.ss = x.ss;
            //now we push the element from the same array from which we have pop the minimum element and stored the ans for same
            pq.push(temp);
        }
        //now we increment the count in idx which stores the array element position for k respective arrays
        idx[x.ss] +=1;
    }
    //printing the ans
    rep(i,0,ans.size())
        cout<<ans[i]<<" ";
    cout<<"\n";
}
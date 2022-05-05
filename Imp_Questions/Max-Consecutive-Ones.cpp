//we have to find in an array the length of the max subaaray containing only 1
//we can at max change k 0s to 1s

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ans=INT_MIN ;cin>>n>>k;
    vector <int> a(n);
    for(auto &i: a)
        cin>>i;
    int i=0,zeroCount=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]==0)
            zeroCount++;
        while(zeroCount>k)
        {
            if(a[i]==0)
                zeroCount--;
            i++;
        }
        ans = max(ans, j-i+1);       
        cout<<ans<<endl;
    }
    cout<<ans<<endl;
    return 0;
}
//Number of subarray with sum = 0
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<int,int> m;
    int n ; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)        
        cin>>a[i];
    int sum = 0;
    int count = 0;
    // for(int i =0;i<n;i++)
    // {
    //     sum+=a[i];
    //     if(sum==0 && m.find(sum)==m.end())
    //     {
    //         m[sum]=i;
    //         count++;
    //     }
    //     else
    //     {
    //         if (sum==0)
    //         count++;
    //         if (m.find(sum)!=m.end())
    //            count++;
    //         else
    //             m[sum] = i;
    //     }    
    // }
    for(int i =0;i<n;i++)
    {
        sum+=a[i];
        m[sum]++;
    }
    unordered_map<int,int> :: iterator it;
    for(it = m.begin();it!=m.end();it++)
    {
        int c = it -> second;
        count += (c*(c-1))/2;
        if(it->first==0)
            count += it->second;
    }
    cout<<count<<endl;
    return 0;
}
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
    int len = INT_MIN;
    for(int i =0;i<n;i++)
    {
        sum+=a[i];
        if(sum==0)
            len = max(len,i+1);
        else if (m.find(sum)!=m.end())
            len = max(len,i-m[sum]);
        else
            m[sum] = i;
    }
    cout<<len<<endl;
    return 0;
}
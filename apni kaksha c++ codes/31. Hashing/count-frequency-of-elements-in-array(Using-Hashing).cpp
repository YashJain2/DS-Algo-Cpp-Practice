#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin>>n;
    vector<int> a;
    for(int i =0;i<n;i++)
        cin>>a[i];
    map<int,int> m;
    for(int i=0;i<n;i++)
        m[a[i]]++;
    map<int,int> :: iterator it;
    for(it=m.begin();it!=m.end();it++)
        cout<<it->first<<" -> "<<it->second<<"\n";
}
#include<bits/stdc++.h>
using namespace std;

// //O(nlogn) brute approach
// int main()
// {
//     int n,k;cin>>n>>k;
//     vector<int> a(n);
//     for(auto &i: a)
//         cin>>i;
    
//     multiset<int,greater<int>> s; //stores the value greatest at first position
//     vector <int> ans;
//     for(int i=0i<k;i++)
//         s.insert(a[i]);
//     ans.push_back(*s.begin());
//     for(int i=k;i<n;i++)
//     {
//         s.erase(s.lower_bound(a[i-x]));
//         s.insert(a[i]);
//         ans.push_back(*s.begin());
//     }
//     for(auto i: ans)
//         cout<<i<<" ";
//     cout<<"\n";
// }


//Optimized approach using Deque O(n)
int main()
{
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(auto &i: a)
        cin>>i;
    deque <int> q;
    vector<int> ans;
    //here we are not stroing the smaller elements in deque 
    //we only store the useful elements
    //first we take care of first k elements
    for(int i=0;i<k;i++)
    {
        while(!q.empty() && a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
    //pushing the max as it is in front
    ans.push_back(a[q.front()]);
    for(int i=k;i<n;i++)
    {
        //if the front of the queue is (i-k) pop out the element as window is moved
        if(q.front()==(i-k))
        {
            q.pop_front();
        }
        
        while(!q.empty() && a[q.back()] < a[i])
        {
            q.pop_back();
        }
        q.push_back(i);
        ans.push_back(a[q.front()]);
    }
    for(auto i : ans)
        cout<<i<<" ";
    cout<<"\n";
    return 0;
}
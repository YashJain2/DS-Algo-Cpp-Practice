//Implemented using Balanced Binary Search Tree

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);

    for(auto &i: s)
        cout<<i<<" ";
    cout<<"\n";
    
    //Printing the set in reverse order
    for(auto i =s.rbegin();i!=s.rend();i++)
        cout<<*i<<" ";
    cout<<"\n";

    //Printing the set size
    cout<<s.size()<<"\n";

    //custom comparator in sets
    set<int,greater<int>> t;
    t.insert(1);
    t.insert(2);
    t.insert(3);
    t.insert(3);
    t.insert(5);

    for(auto &i: t)
        cout<<i<<" ";
    cout<<"\n";

    multiset <int> x;
    x.insert(1);
    x.insert(2);
    x.insert(3);
    x.insert(3);
    x.insert(3);

    for(auto &i: x)
        cout<<i<<" ";
    cout<<"\n";

    x.erase(3);
    for(auto &i: x)
        cout<<i<<" ";
    cout<<"\n";

    // x.erase(x.find(3));

    // for(auto &i: x)
    //     cout<<i<<" ";
    // cout<<"\n";

}
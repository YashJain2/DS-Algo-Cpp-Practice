#include<bits/stdc++.h>
using namespace std;

 int main ()
 {
    deque <int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);
    for(auto i : d)
        cout<<i<<" ";
    cout<<"\n";
    d.pop_back();
    d.pop_front();
    for(auto i : d)
        cout<<i<<" ";
    cout<<"\n";
    cout<<d.size()<<endl;
     return 0;
 }
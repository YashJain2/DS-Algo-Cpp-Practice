#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> ans;


void solve(vector<int> &nums,vector<vector<int>> &ans,int idk){
    if(idk == nums.size()){
        ans.push_back(nums);
        return;
    }
    for(int i = idk; i< nums.size(); i++){
        if(i != idk and nums[i] == nums[idk]) //condition to eliminate similar permutations
            continue;
        swap(nums[i],nums[idk]);
        solve(nums,ans,idk+1);
        swap(nums[i],nums[idk]);
    }
}


int main(){
//vector is a collection of array that we can send to the function, passing its reference
    int n; cin>>n;
    vector <int> a(n);
    for(auto &i : a)
        cin>>i;
    solve(a,ans,0);
    for(auto i : ans)
    {
        for(auto j : i)
            cout<<j<<" ";
        cout<<endl;
    }    

    // using STL
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));

    return 0;
}
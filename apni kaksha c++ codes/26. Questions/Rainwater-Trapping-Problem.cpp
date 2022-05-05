#include<bits/stdc++.h>
using namespace std;

int get_max(vector<int> a)
{
    int ans =0, n = a.size();
    vector<int> leftMax(n),rightMax(n);
    int temp=INT_MIN;
    //calculating left max for all the positions
    for(int i=0;i<n;i++)
    {
        temp = max(temp,a[i]);
        leftMax[i]=temp;
    }
    temp=INT_MIN;
    //calculating right max for all the positions
    for(int i=n-1;i>=0;i--)
    {
        temp=max(temp,a[i]);
        rightMax[i]=temp;
    }
    //adding the trapped water using = min(leftmax[i],rightmax[i]) - current height for each position
    for(int i=1;i<n-1;i++)
    {
        int mn = min(leftMax[i],rightMax[i]);
        ans += mn-a[i];
    }
    return ans;
}

int get_max1(vector<int> a)
{
    if(a.size()<3)
        return -1;
    int ans =0, n= a.size();
    int leftMax = a[0], rightMax= a[n-1];
    int left=1,right=n-2;
    while(left<=right)
    {
        if(leftMax<=rightMax)
        {
            ans += (leftMax - a[left]);
            left++;
            if(a[left]>leftMax)
                leftMax = a[left];
        }
        else
        {
            ans += (rightMax - a[right]);
            right--;
            if(a[right]>rightMax)
                rightMax = a[right];
        }
    }
    return ans;
}


int main()
{
    vector<int> a={4,2,0,3,2,5};
    cout<<get_max1(a);
}
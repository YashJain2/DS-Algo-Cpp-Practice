#include<bits/stdc++.h>
using namespace std;

//here it doesn't take notice of the rectangles in the right can also be included
int get_max_area(vector<int> a)
{
    int n = a.size(), ans =0, i=0;
    a.push_back(0);
    stack<int> s;
    while(i<n)
    {
        while(!s.empty() && a[s.top()]>a[i])
        {
            int t = s.top();
            int h = a[t];
            s.pop();
            if(s.empty())
                ans = max(ans,h*i);
            else
            {
                int len = i - s.top() - 1;
                ans = max(ans,h*len);
            }
        }
        s.push(i);
        i++;
    }
    return ans;   
}


//Brute force approach using calculating left and right for each bar iteratively
// O(n^2)
int get_max_area1(vector<int> a)
{
    int ans = INT_MIN;
    for(int i=0;i<a.size();i++)
    {
        int left=i,right=i;
        while(left>=0 && a[i]<=a[left])
            left--;
        while(right<a.size() && a[i]<=a[right])
            right++;
        ans = max(ans, a[i]*(right-left-1));
        // cout<<left<<" "<<right<<" "<<a[i]*(right-left-1)<<endl;
    }
    return ans;
}

//Using Stack to calculate left and right values first and then claculating the area of the each bar seperately
//O(n)
int get_max_area2(vector<int> a)
{
    int ans = INT_MIN,n= a.size();
    stack <int> temp;
    vector<int> left(n),right(n);
    //traversing to find the left of each bar
    for(int i=0;i<n;i++)
    {
        //if the stack is empty
        if(temp.empty())
        {
            left[i]=0;
            temp.push(i);
        }
        else
        {
            //if not we look for the left most bar such that it is smaller than the current bar
            while (!temp.empty() && a[temp.top()] >= a[i])
                temp.pop();
            //if empty we inset starting position else we insert the left+1 position
            left[i] = temp.empty() ? 0 : temp.top() + 1;
            //finally we push the current index in our stack
            temp.push(i);
        }
    }
    //clearing our temporary stack
    while(!temp.empty())
        temp.pop();
    
    //traversing to find the right of each bar
    for(int i=n-1;i>=0;i--)
    {
        //if the stack is empty
        if(temp.empty())
        {
            right[i]=n-1;
            temp.push(i);
        }
        else
        {
            //if not we look for the left most bar such that it is smaller than the current bar
            while (!temp.empty() && a[temp.top()] >= a[i])
                temp.pop();
            //if empty we inset starting position else we insert the right-1 position
            right[i] = temp.empty() ? n-1 : temp.top() - 1;
            //finally we push the current index in our stack
            temp.push(i);
        }
    }

    for(int i=0;i<n;i++)
        ans = max(ans, a[i]*(right[i]-left[i]+1));
    return ans;
}


int main()
{
    vector<int> a={5,1,4,4,5};
    cout<<get_max_area2(a);
}
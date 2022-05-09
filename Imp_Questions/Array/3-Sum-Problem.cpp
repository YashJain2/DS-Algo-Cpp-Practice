#include<bits/stdc++.h>
using namespace std;

bool sum_pair_brute(vector<int> a,int target)
{
    bool flag = false;
    int n = a.size();
    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            for(int k= j+1;k<n;k++)
                if((a[i]+a[j]+a[k])==target)
                {
                    cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<"\n";
                    flag = true;
                }
    return flag;
}

//fixing the ith position and using two pointer approach and iterating over the sorted array to find the remaining sum for the target
bool sum_pair_optimize(vector<int> a , int target)
{
    sort(a.begin(),a.end()); // nlogn complexity to sort the array
    bool flag = false;
    int n = a.size();
    for(int i =0;i<n-2;i++)
    {
        int temp = a[i];
        int remSum = target - a[i];
        int left = i+1, right = n-1;
        while( left < right )
        {
            if( remSum > (a[left] + a[right]))
                left++;
            else if (remSum < (a[left] + a[right]))
                right--;
            else 
                break;
        }
            
        if(remSum == (a[left] + a[right]) && left!=right)
        {
            cout<<a[i]<<" "<<a[left]<<" "<<a[right]<<"\n";
            flag = true;
        }
    }
    return flag;
}


int main()
{
    vector <int> a={1,3,6,7,9,12};
    if(sum_pair_optimize(a,24))
    {
        cout<<"Pair is present\n";
    }
    else
    {
        cout<<"Pair is not found\n";
    }
    return 0;
}
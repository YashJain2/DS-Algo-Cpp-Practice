#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];   
    // Max Sub-array sum 
    // Kadane's Algorithm O(n)
    int sum=0,maxSum=INT_MIN;
    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        if(sum<0)
            sum=0;
        maxSum=max(maxSum,sum);
    }
    cout<<maxSum<<endl;
    return 0;
}
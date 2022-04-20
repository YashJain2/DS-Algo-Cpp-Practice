#include<iostream>
using namespace std;

int main()
{
    int n;    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    // Maximum circular subarray sum
    int sum=0,maxSum=INT_MIN;
    int wrapSum=0,nonWrapSum=0;
    //total sum
    for(int i=0;i<n;i++)
        sum+=a[i];

    int currentSum=0;
    //kadane's algo on given array
    for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum<0)
            currentSum=0;
        nonWrapSum=max(nonWrapSum,currentSum);
    }

    //reversing the sign of the array
    for(int i=0;i<n;i++)
        a[i]=-a[i];

    //kadane's algo on the array after sign reversal
    //to find non-contributing element
    currentSum=0;
     for(int i=0;i<n;i++){
        currentSum+=a[i];
        if(currentSum<0)
            currentSum=0;
        wrapSum=max(wrapSum,currentSum);
    }
    //here wrapsum is already negative element which is non-contributing so we add it to the sum
    //Total sum + non-contributing =maxSubarray sum
    wrapSum=sum + wrapSum;
    cout<<max(nonWrapSum,wrapSum)<<endl;
    return 0;
}

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    //Brute force approach
    // maximum sub-array sum      
//     int maxSum=0;
//     for(int i =0;i<n;i++){
//         for(int j=i;j<n;j++){
//             int sum=0;
//             for(int k=i;k<=j;k++){
//                 sum+=a[k];
//             }
//             // cout<<sum<<endl;
//             maxSum=max(maxSum,sum);
//         }
//     }
//    cout<<maxSum<<endl;

    
    //culmulative sum array approach
    //Time : O(n2)
    //Using cumulative sum approach
    int currentSum[n+1];
    currentSum[0]=0;
    for(int i=1;i<=n;i++)
    {
        currentSum[i] = currentSum[i-1] + a[i-1];
    }

    for(int i=0;i<=n;i++)
        cout<<currentSum[i]<<" ";
    cout<<"\n";

    int maxSum=INT_MIN;
    //Sum till i 
    for(int i=1;i<=n;i++)
    {
        int sum=0;
        //Sum till j
        for(int j=0;j<i;j++)
        {
            //subtracting the sum till i with j to get the sum between i & j
            sum = currentSum[i] - currentSum[j];
            maxSum = max(maxSum,sum);
        }
    }
    cout<<maxSum<<endl;



    return 0;
}
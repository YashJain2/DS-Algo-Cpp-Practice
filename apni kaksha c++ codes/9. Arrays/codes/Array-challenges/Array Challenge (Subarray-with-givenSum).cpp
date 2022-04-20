#include<iostream>
using namespace std;


int main()
{

    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int givenSum=x;
    int i=0,j=0,st=1,ed=1,sum=0;

    while(j<n && sum+a[j]>givenSum)
    {
        sum+=a[j];
        j++;
    }
    if(sum==givenSum)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }

    while(j<n)
    {
        sum+=a[j];
        while(sum>givenSum)
        {
            sum-=a[i];
            i++;
        }
        if(sum==givenSum)
        {
            st=i+1;
            ed=j+1;
            break;
        }
        j++;
    }

    
    // //Sub-array with given sum
    // int sum=20,current=a[0],low=0,high=0;
    // for(int i=0,j=1;current!=sum && i<n;){
    //     if(current<sum){
    //         current+=a[j];
    //         high=j;
    //         j++;
    //     }
    //     else if (current>sum){
    //         current-=a[i];
    //         i++;
    //         low=i;
    //     }
    //     else{
    //         low=i;
    //         high=j;
    //         break;
    //     }
    // }
    // if(current==sum){
    //     cout<<low+1<<"\t"<<high+1<<endl;
    // }
    // else{
    //     cout<<-1<<endl;
    // }

    cout<<st<<" "<<ed<<endl;
    return 0;
}
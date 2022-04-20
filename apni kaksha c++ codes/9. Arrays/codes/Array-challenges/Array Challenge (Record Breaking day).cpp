#include<iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    //record breaking day
    // mx->stores maximum visitors in a day till that date
    // x-> holds the value of present day
    int mx=a[0],x=1,record_breaking=0;

    //first day can be record breaking
    if(a[0]>a[1])
        record_breaking++;

    //checking for rest of the days
    while(x<n-1){
        mx=max(mx,a[x]);
        if(mx==a[x] && (a[x]>a[x+1]))
            record_breaking++;
        x++;
    }

    //last day can also be record breaking day
    if(mx==a[n])
        record_breaking++;
    cout<<record_breaking<<endl;

    return 0;
}
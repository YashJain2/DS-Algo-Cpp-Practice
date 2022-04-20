#include<iostream>
#include<climits>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    

    //sum of all sub-arrays
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum+=a[j];
            cout<<sum<<"  ";
        }
    }
    cout<<endl;
    return 0;
}
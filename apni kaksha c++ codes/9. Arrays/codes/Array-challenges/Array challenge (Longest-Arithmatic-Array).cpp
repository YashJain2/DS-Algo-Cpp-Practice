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

    //Longest Arithmatic Array
    int pd=a[1]-a[0],maxLength=0,currentLength=2;
    for(int i=1;i<n-1;i++)
    {
        if(pd == a[i+1]-a[i])
        {
            currentLength++;
            maxLength = max(maxLength,currentLength);
        }
        else{
            pd = a[i+1] - a[i];
            currentLength=2;
        }
    }
    cout<< maxLength << endl;
    return 0;
}
    

#include<iostream>
using namespace std;

//1 5 3 4 3 5 6
//here 5 is the first occurence of the repeating element with minimum index

int main()
{

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int temp[100000],idx=INT_MAX;
    for(int i=0;i<100000;i++)
        temp[i]=-1;

    for(int i=0;i<n;i++)
    {
        if(temp[a[i]] == -1)
            temp[a[i]] = i;
        else
        {
            idx=min(idx,temp[a[i]]);
        }
    }
    cout<<"The first repeating number in the given array is "<<a[idx]<<"\n";
    cout<<"The position of its first occurence is "<<temp[a[idx]]<<"\n";

    return 0;
}
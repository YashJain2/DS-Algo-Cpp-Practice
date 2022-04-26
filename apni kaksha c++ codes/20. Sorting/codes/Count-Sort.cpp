#include<bits/stdc++.h>
using namespace std;

void countSort(int a[],int n)
{
    int mx= INT_MIN;
    for(int i=0;i<n;i++)
        mx = max(mx,a[i]);
    // cout<<mx<<endl;

    vector <int> b(mx+1);
    for(int i=0;i<=mx;i++)
        b[i]=0;
    //count array
    for(int i=0;i<n;i++)
        b[a[i]]++;

    //cumulative count array
    for(int i=1;i<=mx;i++)
        b[i] += b[i-1];

    //result array
    vector <int> result(n);
    for(int i=n-1;i>=0;i--)
        result[--b[a[i]]]=a[i];

    //making the given array as result array
    for(int i=0;i<n;i++)
        a[i]=result[i];
}


int main()
{
    int a[] = {3, 4, 3, 2, 1, 1};
    countSort(a, 6);
    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";   
    cout << endl;
    return 0;
}
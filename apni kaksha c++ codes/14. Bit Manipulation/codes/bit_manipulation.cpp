#include <iostream>
#include <vector>
#include <string>

using namespace std;



bool getBit(int n, int pos)
{
    return ((n & (1 << (pos))) != 0);
}

int setBit(int n, int pos)
{
    return (n | (1 << (pos)));
}

int clearBit(int n, int pos)
{
    int x = ~(1 << (pos - 1));
    return (n & x);
}

int updateBit(int n, int pos, int key)
{
    int x = ~(1 << (pos - 1));
    n = (n & x);
    return (n | (key << (pos - 1)));
}


int unique(int a[], int n){
    int result=0;
    for(int i=0;i<64;i++){
        int sum=0;
        for(int j=0;j<n;j++){
            if(getBit(a[j],i)){
                sum++;
            }
        }
        if(sum%3!=0){
            result=setBit(result,i);
        }
    }
    return result;
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    cout << getBit(5, 3) << endl;

    cout << setBit(5, 2) << endl;

    cout << clearBit(5, 2) << endl;

    cout << updateBit(5, 1, 0) << endl;

    int x;
    cin >> x;
    //check for the power of 2

    if ((x & x - 1) == 0 && x != 0)
    {
        cout << x << " is the power of 2" << endl;
    }
    else
    {
        cout << x << " is not the power of 2" << endl;
    }

    //check the number of ones in a number
    int temp = x, a = 0;
    while (temp)
    {
        temp = (temp & (temp - 1));
        a++;
    }
    cout << a << endl;

    //printing all subarrays

    int arr[]={1,2,3};
    for(int i=0;i<(1<<3);i++)
    {
        for(int j=0;j<3;j++)
        {
            if(i & (1<<j))
            {
                cout<<arr[j]<<" ";
            }
        }
        cout<<endl;
    }

    //print the unique number from an array where rest numbers are present twice
    int aa[]={1,2,2,3,3,4,1};
    int xr=0;
    for(int i=0;i<7;i++){
        xr=(xr^aa[i]);
    }
    cout<<xr<<endl;


    //print the two unique number from an array of duplicates
    int b[]={1,1,2,3,2,1,3,2,3,4};
    xr=0;
    for(int i=0;i<10;i++){
        xr=(xr^b[i]);
    }

    int temp1=xr,pos=0;
    int set=0;
    while(set!=1){
        set=xr & 1;
        pos++;
        xr=(xr>>1);
    }
    
    int nxr=0;
    for(int i=0;i<10;i++){
        if(setBit(b[i],pos-1)){
            nxr=(nxr^b[i]);
        }
    }
    cout<<nxr<<" "<<(temp1^nxr)<<endl;
    cout<<endl;



    //program to find three unique no. from an array of duplicate
     cout<<unique(b,10)<<endl;
    
    return 0;
}
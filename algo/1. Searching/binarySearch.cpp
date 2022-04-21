#include<iostream>
using namespace std;

//Using loops
int binarySearch(int a[],int size,int key)
{
    int ans,low=0,high=size-1,mid=(low+high)/2;
    while(high>=low)
    {
        if(key==a[mid])
            return (mid+1);
        else if (key>a[mid])
            low=mid+1;
        else
            high=mid-1; 
        mid=(low+high)/2;
    }
    return -1;
}

//Using Recursion BInary Search
int binarySearch1(int a[],int low,int high,int key)
{
    if(low>=high)
        return -1;
    
    int mid = (low+high)/2;

    if(a[mid]== key)
        return (mid+1);
    else if (a[mid]>key)
        return binarySearch1(a,low,mid-1,key);
    else
        return binarySearch1(a,mid+1,high,key);
    
}


int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int a[5]={21,70,90,101,405};
    int key=101,size=5;
    int result=binarySearch1(a,0,size-1,key);
    if(result==-1){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key is present at: "<<result<<endl;
    }
    return 0;
}
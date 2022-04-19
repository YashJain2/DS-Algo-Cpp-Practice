#include<iostream>
using namespace std;


int linearSearch(int a[],int size,int key)
{
    for(int i=0;i<size;i++)
    {
        if(a[i]==key)
        {
            return (i+1);
        }
        else
            continue;
    }
    return -1;
}


int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int a[5]={21,70,90,101,405};
    int key=2,size=5;
    int result=linearSearch(a,size,key);
    if(result==-1){
        cout<<"Key not found"<<endl;
    }
    else{
        cout<<"Key is present at: "<<result<<endl;
    }
    return 0;
}
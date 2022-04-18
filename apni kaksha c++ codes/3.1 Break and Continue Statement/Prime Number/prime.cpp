#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
       //defining inut and output files and methods
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    //checks for whether a given number is prime or not

    // int x,y,i;
    // cin>>x;
    // for(i=2;i<x/2;++i){
    //     if(x%i==0){
    //         break;
    //     }
    // }
    // if(i==x/2 || x==2 ||x==3){
    //     cout<<"Prime Number"<<endl;
    // }
    // else{
    //     cout<<"Not a Prime Number"<<endl;
    // }

    //Printing the prime numbers till n
    int n;
    cin>>n;
    for(int i=2;i<=n;i++){
        bool flag = true;
        for(int j=2;j<=sqrt(i);j++){
            if(i%j==0){
                flag=false;
                break;
            }
        }
        if(flag){
            cout<<i<<"\n";
        }
    }

    return 0;
}

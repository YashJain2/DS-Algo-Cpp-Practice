// #include<bits.stdc++.h>
#include<iostream>
using namespace std;

int factorial(int n){
    int result=1;
    for(int i=2;i<=n;i++){
        result*=i;
    }
    return result;
}

int main(){

    //defining inut and output files and methods
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

   int n=5;
    //Pascal's Triangle
    for(int i=1;i<=n;i++){
        int num=1;
        for(int j = 0;j<(n-i); j++ ){
            cout<<" \t";
        }
        int k=1;
        for(int j=1;j<=i;j++){
            cout<<num<<"\t\t";
            num= (num * (i-k)/j);
            k++;
        }
        cout<<"\n";
    }

    return 0;
}
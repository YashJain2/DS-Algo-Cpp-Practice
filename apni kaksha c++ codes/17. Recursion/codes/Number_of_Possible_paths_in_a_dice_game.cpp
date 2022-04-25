#include<iostream>
using namespace std;

int path(int s,int e){
    if(s == e){
        return 1;
    }
    if(e < s){
        return 0;
    }
    int count = 0;
    for(int i = 1; i<=6; i++){
    count += path(s+i,e);}  

    return count;
}

int main(){

    int n;
    cin>>n;
    cout<<path(0,n);

    return 0;
}
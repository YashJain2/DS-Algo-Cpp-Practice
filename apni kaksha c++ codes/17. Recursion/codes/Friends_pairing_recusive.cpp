#include<iostream>
using namespace std;

int friends(int n){
    if(n == 0 || n == 1 || n == 2)
        return n;
    return (n-1)*friends(n-2) + friends(n-1);
}
//calls n-2 if we pair up so possible ways to pair is n-1 
// therefore  n-1 * friends(n-2)
//calls freinds(n-1) if we leave them single

int main(){

    int n;
    cin>>n;
    cout<<friends(n);

    return 0;
}
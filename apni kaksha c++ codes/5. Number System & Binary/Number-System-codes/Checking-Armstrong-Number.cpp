#include<iostream>
#include<cmath>
#define lli long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    lli temp=0,num=n;
    while(n)
    {
        temp = temp + pow((n%10),3);
        n/=10;
    }
    if(num==temp){
        cout<<"The given number is an armstrong number "<<num<<endl;
    }
    else{
        cout<<"The given number is not an armstrong number "<<num<<endl;
    }
    return 0;
}
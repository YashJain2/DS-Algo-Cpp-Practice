//Calculating factorial of n
#include<iostream>
#define lli long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    lli fact=1;
    if(n==1 || n==0){
        cout<<1<<endl;
    }
    else
    {
        for(int i=n;i>=1;i--)
        {
            fact = fact * i;
        }
        cout<<fact<<endl;
    }

    return 0;
}
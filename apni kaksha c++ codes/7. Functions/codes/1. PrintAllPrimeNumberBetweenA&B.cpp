#include<iostream>
#include<cmath>
using namespace std;

//checks whether the passed parameter is prime or not
void printPrime(int a)
{
    bool flag = true;
    for(int i=2;i<=sqrt(a);i++)
    {
        if(a%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
        cout<<a<<" ";
}

int main()
{
    int a,b;
    cin>>a>>b;
    for(;a<=b;a++)
    {
        printPrime(a);
    }
    return 0;
}
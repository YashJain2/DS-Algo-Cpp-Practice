//Checking the number is prime or not
#include<iostream>
#include<cmath>
#define lli long long int
using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag = true;
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        {
            flag=false;
            break;
        }
    }
    if(flag)
    {
        cout<<"The number is prime "<<n<<endl;
    }
    else
    {
        cout<<"The number is not prime "<<n<<endl;
    }
    return 0;
}

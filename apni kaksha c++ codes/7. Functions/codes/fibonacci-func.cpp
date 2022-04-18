#include<iostream>
using namespace std;

//finds nth fibonacci number
void fib(int n)
{
    if(n==1)
    {
        cout<<0<<endl;
    }
    else if (n==2)
    {
        cout<<1<<endl;
    }
    else
    {
        int a = 0;
        int b = 1;
        for(int i=2;i<n;i++)
        {
            int temp = a+b;
            a=b;
            b=temp;
        }
        cout<<b<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    fib(n);
    return 0;
}
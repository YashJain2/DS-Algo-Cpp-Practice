#include<iostream>

using namespace std;

int tillingWays(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    return tillingWays(n-1) + tillingWays(n-2);
}

//find the number of ways to tile(2*1) the board (2*n)
int main()
{
    cout<<tillingWays(6)<<endl;
    return 0;
}
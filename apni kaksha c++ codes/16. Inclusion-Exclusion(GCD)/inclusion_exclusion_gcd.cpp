#include <iostream>
#include <vector>
#include <string>

using namespace std;

int gcd(int a, int b)
{
    if (a == 0)
    {
        return b;
    }
    return gcd(b % a, a);
}

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //numbers divisible by 5 7 between 1-1000
    int a = 34, b = 17;
    int c1 = 1000 / a, c2 = 1000 / b, c3 = 1000 / (a + b);
    cout << c1 + c2 - c3 << endl;

    cout << gcd(24, 128) << endl;

    while (a != 0)
    {
        int rem = b % a;
        b = a;
        a = rem;
    }
    cout << b << endl;

    return 0;
}
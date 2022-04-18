#include <iostream>
using namespace std;

int main()

{

    //defining inut and output files and methods
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    char button;
    cin >> button;
    switch (button)
    {
    case 'a':
        cout << "You are in case 1" << endl;
        break;
    case 'b':
        cout << "You are in case 2" << endl;
        break;
    case 'c':
        cout << "You are in case 3" << endl;
        break;
    case 'd':
        cout << "You are in case 4" << endl;
        break;
    case 'e':
        cout << "You are in case 5" << endl;
        break;
    default:
        cout << "You are facing a default statement" << endl;
        break;
    }

    return 0;
}


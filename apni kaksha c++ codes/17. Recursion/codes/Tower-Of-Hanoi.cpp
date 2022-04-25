#include<iostream>
using namespace std;

// Output:
// Move from A to C
// Move from A to B
// Move from C to B
// Move from A to C
// Move from B to A
// Move from B to C
// Move from A to C

void towerOfHanoi(int n, char src, char dest, char helper)
{
    if(n==0)
        return;
    towerOfHanoi(n-1,src, helper, dest);
    cout<<"Move from "<<src<<" to "<<dest<<"\n";
    towerOfHanoi(n-1, helper,dest,src);
}

int main()
{
    towerOfHanoi(3,'A','C','B');
    return 0;
}
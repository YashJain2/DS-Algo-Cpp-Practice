#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a = 10;
    //& -> address of operator
    // *aptr -> dereferencing the value at address of aptr
    int *aptr = &a;
    cout << aptr << " " << *aptr << endl;
    //modifying the value of a using pointer
    *aptr = 20;
    cout << a << endl;
    //pointer arithmatic
    //increments by four bytes as it is of integer type
    aptr++;
    cout << aptr << endl;
    cout << *aptr << endl;
    aptr--;

    //pointers and arrays
    int arr[] = {1, 2, 3, 4, 5};
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;

    //pointer to a array
    int *ptr = arr;
    for (int i = 0; i < 5; i++)
    {
        cout << *ptr << " ";
        ptr++;
        //arr++ is illegal as array is a constant poiter so it can points only to base address of an array
    }
    cout << endl;

    //pointer to pointer
    int **q = &aptr;
    //**q dereference 2 times
    cout << q << " " << *q << " " << **q << endl;
    cout << &aptr << " " << aptr << " " << *aptr << endl;
    cout << endl;

    //swapping by reference
    int x = 10, y = 20;
    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y << endl;

    //heap is a free dynamic storage allocation in c++
    int *p = new int ();
    //p is a pointer in stack that points to 10 in a memory heap
    *p=10;
    //acts as a global variable
    delete(p);
    p=new int [4];
    //dynamic allocation of array in heap
    //we have to manually allocate and deallocate memory in heap
    //after deleting p 10 is removed from heap but p still points to memory heap
    //this concept is known as dangling pointer
    p=NULL;
    //to remove dangling pointer
    return 0;
}
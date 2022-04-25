#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int l, int r)
{
    int pivot = a[r];
    int i=l-1,j=l;
    for(;j<r;j++)
    {
        if(pivot>a[j])
        {
            i++; //keeps track of the number of elements smaller than pivot 
            swap(a[i],a[j]);//swaps the greatest element to the smallest in beginning which where i is holding the larger element
        }
    }
    swap(a[i+1],a[r]); //swaps the pivot in between the paritions where on left all are small and on right all ara greater
    return i+1;
}

void quickSort(int a[],int l, int r)
{
    if(l<r)
    {
        int pivot = partition(a,l,r);
        quickSort(a,l,pivot-1);
        quickSort(a,pivot+1,r);
    }
}


int main()
{
    int a[] = {5, 4, 3, 2, 1, -1};
    quickSort(a, 0, 5);
    for (int i = 0; i < 6; i++)
        cout << a[i] << " ";   
    cout << endl;
    return 0;
}
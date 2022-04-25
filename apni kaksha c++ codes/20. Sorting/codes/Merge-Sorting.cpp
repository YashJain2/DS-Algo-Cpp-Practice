#include <bits/stdc++.h>

using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int n1 = m + 1 - l;
    int n2 = r - m;
    int a[n1];
    int b[n2]; //temp arrays to store the two sorted half and merge them both

    for (int i = 0; i < n1; i++)
        a[i] = arr[l + i]; //assigning values to temp array
    for (int i = 0; i < n2; i++)
        b[i] = arr[m + i + 1]; //assigning values to temp array

    int i = 0;
    int j = 0;
    int k = l; // store the sorted element to the original array 
    while (i < n1 && j < n2)
    {
        if (a[i] < b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
    while (i < n1)
    {
        arr[k] = a[i];
        k++;
        i++;
    }
    while (j < n2)
    {
        arr[k] = b[j];
        k++;
        j++;
    }
}

void mergeSort(int a[], int l, int r)
{

    if (l < r)
    {
        int mid = (l + r) / 2;
        mergeSort(a, l, mid);
        mergeSort(a, mid + 1, r);
        //merging the sorted array
        merge(a, l, mid, r);
    }
}

int main()
{

    int a[] = {5, 4, 3, 2, 1, -1};
    mergeSort(a, 0, 5);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    return 0;
}
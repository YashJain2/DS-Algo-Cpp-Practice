//Dutch National Flag Sorting Technique
//Used to sort any three distinct integers

#include<bits/stdc++.h>
using namespace std;

void dnfSort(int a[], int n){
    int low = 0 , mid = 0,high=n-1;
    while(mid != high)
    {
        if(a[mid] == 0)
        {
            swap(a[low],a[mid]);
            low++,mid++;
        }
        else if (a[mid] == 1)
            mid++;
        else
        {
            swap(a[high],a[mid]);
            high--;
        }
    }

}


int main()
{
    int a[] = {0, 1, 0, 2, 1, 1, 0, 2, 1, 0};
    dnfSort(a, 10);
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";   
    cout << endl;
    return 0;
}
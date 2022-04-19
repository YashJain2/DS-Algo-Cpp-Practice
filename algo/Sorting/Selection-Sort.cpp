#include<iostream>
using namespace std;

//Selection Sort
void selectionSort(int a[],int size){
    for(int i=0;i<size;++i){
        int min=i;
        for(int j=i;j<size;++j){
            if(a[min]>a[j]){
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    //Printing the sorted array
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    int a[]={23,11,0,78,9,65,1};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<size<<endl;
    selectionSort(a,size);
    bubbleSort(a,size);
    insertionSort(a,size);
    return 0;
}
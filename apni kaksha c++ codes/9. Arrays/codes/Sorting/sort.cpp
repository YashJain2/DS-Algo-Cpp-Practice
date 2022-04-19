#include<iostream>
#include<stdlib.h>
using namespace std;

void selectionSort(int a[],int size){
    for(int i=0;i<size;++i){
        int min=i;
        for(int j=i+1;j<size;++j){
            if(a[min]>a[j]){
                min=j;
            }
        }
        if(i!=min)
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
    }

    //Printing the sorted array
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void bubbleSort(int a[],int size){
    for(int i=0;i<size;++i){
        for(int j=0;j+1<size-i;++j){
            if(a[j]>a[j+1]){
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
        
    }
    //Printing the sorted array
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

//Insertion Sort
//Inserting an element into its sorted position in sub-array
// Array -> 
// 23 11 0 78 9 65
// 11 23 0 78 9 65
//     Sub-steps -> 11 23 23 78 9 65
//                  11 11 23 78 9 65
//                  0  11 23 78 9 65
// 0 11 23 78 9 65
// 0 11 23 78 9 65
// 0 9 11 23 78 65
// 0 9 11 23 65 78

void insertionSort(int a[],int size){

    for(int i=1;i<size;++i)
    {
        int j=i-1,current=a[i];
        while(a[j]>current && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=current;
    }
    //Printing the sorted array
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt","r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif
    int a[]={23,11,0,78,9,65,1};
    int size=sizeof(a)/sizeof(a[0]);
    cout<<size<<endl;
    selectionSort(a,size);
    bubbleSort(a,size);
    insertionSort(a,size);
    return 0;
}
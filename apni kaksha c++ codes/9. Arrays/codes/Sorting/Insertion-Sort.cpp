#include<iostream>
using namespace std;

//Insertion Sorting
void insertionSort(int a[],int size){
    for(int i=1;i<size;++i){
        int j=i-1,current=a[i];
        while(a[j]>current && j>=0){
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

    insertionSort(a,size);
    return 0;
}
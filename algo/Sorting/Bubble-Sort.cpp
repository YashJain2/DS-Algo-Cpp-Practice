#include<iostream>
using namespace std;

//Bubble Sorting
void bubbleSort(int a[],int size){
    for(int i=0;i<size;++i){
        for(int j=0;j+1<size-i;++j){
            if(a[j]>a[j+1]){
                //swapping 
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
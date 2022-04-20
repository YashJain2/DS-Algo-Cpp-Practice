#include<iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int m,n;
    cin>>m>>n;
    int a[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";       
        }
        cout<<"\n";
    }

    cout<<endl;

    //spiral matrix printing
    int row_start=0,row_end=m-1,col_start=0,col_end=n-1;
    while(row_start<=row_end && col_start<=col_end){
        // for first row
        for(int col=col_start;col<=col_end;col++){
            cout<<a[row_start][col]<<" ";
        }
        row_start+=1;

        //for end column
        for(int row=row_start;row<=row_end;row++){
            cout<<a[row][col_end]<<" ";
        }
        col_end-=1;

        //for last row
        for(int col=col_end;col>=col_start;col--){
            cout<<a[row_end][col]<<" ";
        }
        row_end-=1;

        //for first col
        for(int row=row_end;row>=row_start;row--){
            cout<<a[row][col_start]<<" ";
        }
        col_start+=1;

    }
    
    //matrix transpose
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
        }
    }

    cout<<endl<<endl;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
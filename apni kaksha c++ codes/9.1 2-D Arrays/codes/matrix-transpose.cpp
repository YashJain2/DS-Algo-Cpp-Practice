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
    //taking input
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>a[i][j];
        
    
    //printing the matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";       
        }
        cout<<"\n";
    }

    cout<<endl;
    //matrix transpose
    for(int i=0;i<m;i++){
        for(int j=i+1;j<n;j++){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp;
        }
    }

    cout<<endl<<endl;
    //printing the matrix
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}
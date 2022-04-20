#include <iostream>
using namespace std;

int main(){
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r",stdin);
    //     freopen("output.txt","w",stdout);
    // #endif

    int m,n,key;
    cin>>m>>n>>key;
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

    //Brute force approach
    bool flag=false;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i][j]==key){
                cout<<i<<" "<<j<<endl;
                flag=true;
            }
        }
    }
    if(flag){
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element not found";
    }
    flag=false;

    // differ approach
    int row=0,col=n-1;//starts from top-right
    while(row<m && col>=0){
        if(a[row][col]==key){
            flag=true;
            cout<<row<<" "<<col<<endl;
            break;
        }
        if (a[row][col]>key){
            col--;
        }
        else{
            row++;
        }
    }
    if(flag){
        cout<<"Element is found"<<endl;
    }
    else
    {
        cout<<"Element not found";
    }
    return 0;
}
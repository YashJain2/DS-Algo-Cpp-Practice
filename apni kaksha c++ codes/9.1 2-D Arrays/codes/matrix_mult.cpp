#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt","w",stdout);
    #endif

    int m,n,o;
    cin>>m>>n>>o;
    int a[m][n],b[n][o];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<o;j++){
            cin>>b[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<"\t";       
        }
        cout<<"\n";
    }
    cout<<endl;

    for(int i=0;i<n;i++){
        for(int j=0;j<o;j++){
            cout<<b[i][j]<<"\t";       
        }
        cout<<"\n";
    }
    cout<<endl;




    
    //matrix multiplication
    int ans[m][o];
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            ans[i][j]=0;
        }
    }

    //here m-> row of 1st n-> col of 1st or row of 2nd o->col of second
    for(int i=0;i<m;i++)
        for(int j=0;j<o;j++)
            for(int k=0;k<n;k++)
                ans[i][j]+=(a[i][k]*b[k][j]);
            
    for(int i=0;i<m;i++){
        for(int j=0;j<o;j++){
            cout<<ans[i][j]<<"\t";       
        }
        cout<<"\n";
    }

    
    return 0;
}

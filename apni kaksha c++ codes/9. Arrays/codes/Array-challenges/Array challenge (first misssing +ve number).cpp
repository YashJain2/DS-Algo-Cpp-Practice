#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    //  find the leat +ve missing number
    bool b[10000];
    for(int i=0;i<10000;i++)
        b[i]=false;

    for(int i=0;i<n;i++)
        if(a[i]>=0)
            b[a[i]]=true;
        
    for(int i=0;i<n;i++)
        if(b[i]==false)
        {
            cout<<i<<endl;
            break;
        }
    return 0;
}

//Fibonacci Sequence till n numbers
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    if(n<2)
    {
        if(n==1){
            cout<<0<<endl;
        }
        else{
            cout<<"0 1\n";
        }
    }
    else{
        cout<<"0 1 ";
        for(int i=2;i<n;i++){
            int temp = a+b;
            cout<<temp<<" ";
            a=b;
            b=temp;
        }
        cout<<"\n";
    }
    
    return 0;
}
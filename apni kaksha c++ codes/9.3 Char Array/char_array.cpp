#include <iostream>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    //declaration
    char a[]="Yash Jain";
    for(int i=0;a[i]!='\0';i++){
        cout<<a[i];
    }
    cout<<endl;
    char arr[100];
    cin>>arr;
    //spaces will be marked as null and the array will terminate
    cout<<arr<<endl;


    //check palindromes
    int m=10;
    char b[m];
    cin>>b;
    cout<<b<<endl;
    bool check=1;
    for(int i=0;i<m;i++){
        if(b[i]!=b[m-1-i]){
            check=0;
        }
    }

    if(check==true)
        cout<<"Word is a palindrome";
    else
        cout<<"Word is not a palindrome";

    return 0;
}
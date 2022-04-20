#include<iostream>
#include<climits>

using namespace std;

int main()
{
    int a[5]={7,-9,10,2,15};
    int n=2,max=INT_MIN; //maximum till n
    for(int i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }
    cout<<max<<endl;
    return 0;
}
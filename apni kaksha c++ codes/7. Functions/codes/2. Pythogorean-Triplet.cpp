#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b)
    {
        if(a>c)
        {
            if((a*a) == (b*b + c*c))
                   cout << "Pyhtagorean triplet\n";
            else
               cout << "Not Pyhtagorean triplet\n";
        }
        else
        {
            if((c*c) == (a*a + b*b))
               cout << "Pyhtagorean triplet\n";
            else
               cout << "Not Pyhtagorean triplet\n";
        }
    }
    else
    {
        if(b>c)
        {
            if((b*b) == (a*a+c*c))
               cout << "Pyhtagorean triplet\n";
            else
               cout << " Not Pyhtagorean triplet\n";
        }
        else
        {
            if((c*c) == (a*a + b*b))
               cout << "Pyhtagorean triplet\n";
            else
               cout << "Not Pyhtagorean triplet\n";
        }
    }

    return 0;
}
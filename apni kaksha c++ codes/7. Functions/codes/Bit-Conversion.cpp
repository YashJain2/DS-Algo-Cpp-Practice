#include<iostream>
#include<cstring>
#include<vector>
#include<cmath>
using namespace std;

//Binary to Decimal Conversion
int binary2decimal(int n){
    int result=0,x=0;
    while(n>0){
        if(n%10==1){
            result+=pow(2,x);
        }
        n=n/10;
        x++;
    }
    return result;
}


//Octal to Decimal Conversion
int octal2decimal(int n){
    int result=0,x=0;
    while(n>0){
        result= result + ( pow(8,x) * (n%10) );
        n=n/10;
        x++;
    }
    return result;
}

//HexaDecimal to Decimal
int hexadecimalToDecimal(string s){
    int ans = 0;
    int x = 1; //base
    int n = s.size();
    for(int i = n-1; i>=0; i--){
        if(s[i] >= '0' && s[i] <= '9')
            ans += x*(s[i] - '0');
        else if(s[i] >= 'A' && s[i] <= 'F')
            ans += x*(s[i] - 'A' + 10);
        else if(s[i] >= 'a' && s[i] <= 'f')
            ans += x*(s[i] - 'a' + 10);
        x *= 16;
    }
    return ans;
}

//Decimal to Binary
int decimal2binary(int n)
{
    vector <int> a;
    while(n)
    {
        a.push_back(n%2);
        n=n/2;
    }
    int result=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        result = result * 10 + a[i];
    }
    return result;
}


//Decimal to Octal
int decimal2octal(int n)
{
    vector <int> a;
    while(n)
    {
        a.push_back(n%8);
        n=n/8;
    }
    int result=0;
    for(int i=a.size()-1;i>=0;i--)
    {
        result = result * 10 + a[i];
    }
    return result;
}

//Another approach
// int decimal2octal(int n){
//     int result=0;
//     while(n){
//         result=result*10+(n%8);
//         n/=8;
//     }
//     int x=0;
//     while(result>0){
//         x=x*10+(result%10);
//         result/=10;
//     }
//     return x;
// }


//Decimal to Hexadecimal
string decimaltoHexadecimal(int n){
    int x = 1;
    string ans = "";
    while(x <= n)
        x *= 16;
    x /= 16;

    while(x > 0){
        int lastDigit = n/x;
        n -= lastDigit*x;
        x /= 16;
        if(lastDigit <= 9)
            ans = ans + to_string(lastDigit);
        else
        {
            char c = 'A' + lastDigit - 10;
            ans.push_back(c);
        }
    }
    return ans;
}

int main(){
    cout<<decimal2octal(95)<<endl;
    cout<<octal2decimal(137)<<endl;
    cout<<hexadecimalToDecimal("1CF")<<endl;
    return 0;
}

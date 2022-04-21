#include <iostream>
#include<algorithm>
#include <vector>
#include <string>

using namespace std;

int main()
{

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    //strings are terminated with special character '\0'
    //declaration of strings
    string str;
    cin >> str;
    cout << str << endl;

    string str1(4, 'n');
    cout << str1 << endl;

    //input string with spaces
    cin.ignore();
    string s;
    getline(cin, s);
    cout << s << endl;

    //concatenating string
    cout << str + str1 << endl;

    str.append(str1); //str=str+str1;
    cout << str << endl;

    //find in string or accessing any character of a string
    cout<<str[0]<<endl;


    //clearing any string
    cout<<s<<endl;
    s.clear();
    cout<<s<<endl;

    //comparing a string
    string s1="abc";
    string s2="xyz";
    cout<<s1.compare(s2)<<endl;
    cout<<s1.compare(s1)<<endl;
    cout<<s2.compare(s1)<<endl;


    //check for an empty string
    cout<<s1.empty()<<endl;//false
    s1.clear();
    cout<<s1.empty()<<endl;//true


    //erase a character from a string
    str.erase(4,4);
    cout<<str<<endl;

    //finding in a string
    string x="dnironvelvr;euirvni o;erni ebue eg;obierbucxomdo";
    cout<<x.find("i")<<endl;
    cout<<x.find_last_of("i")<<endl;


    //inserting in a string
    cout<<str.insert(4," Jain")<<endl;

    //size or length of a string
    cout<<str.size()<<endl;
    //str.length()

    //substring of a string
    cout<<str.substr(5,4)<<endl;

    //string to number
    string s3="-345";
    int temp=stoi(s3);
    cout<<temp<<endl;

    //integer to string
    int temp1=34;
    // cout<<to_string(temp1) + "2"<<endl;                 

    //sorting A string
    sort(x.begin(),x.end());
    cout<<x<<endl;

    //to upper case
    for(int i=0;i<x.length();i++){
        x[i]=x[i]-32;
    }
    cout<<x<<endl;

    //to lower case
    for(int i=0;i<x.length();i++){
        x[i]=x[i]+32;
    }
    cout<<x<<endl;

    transform(x.begin(),x.end(),x.begin(),::toupper);
    cout<<x<<endl;
    transform(x.begin(),x.end(),x.begin(),::tolower);
    cout<<x<<endl;

    //greatest number 
    string y="89278278945";
    sort(y.begin(),y.end(),greater<int>());
    cout<<y<<endl;

    //frequency of letters in a strings
    string z="wvyiyceovefyrbvuoibrvwyuvpiwtbvtbovurvnrwtoyrfgbrfeyqwydqwcutqxxcqtzzqutxsqzvuqz";
    int arr[26]={0};
    for(int i=0;i<26;i++){
        arr[z[i]-'a']++;
    }
    int maxPos=0,max=0;
    for(int i=0;i<26;i++){
        if(max<arr[i]){
            maxPos=i;
            max=arr[i];
        }
        cout<<arr[i]<<" ";
    }
    char p='a'+maxPos;
    cout<<endl<<arr[maxPos]<<" "<<p<<endl;


    //int to string & string to integer type
    string num = "789";
    int number = stoi(num);
    cout<<(number + 1)<<endl; //790 in
    num = to_string(number) + "2"; //7892

    return 0;
}
#include<iostream>
#include<climits>
#include<algorithm>
#include<string>

using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    string str;
    string str1(5,'P');
    string str2="C++";
    string str3;
    char a[100];
    cin.getline(a,90);
    getline(cin,str3);
    cout<<str1<<endl;
    cout<<str2<<endl;
    cout<<a<<endl;
    cout<<str3<<endl;
    cin>>str;
    cout<<str<<endl;

    //string concatenation
    string s1="fam",s2="ily";
    cout<<s1+s2<<endl;
    s1.append(s2);
    cout<<s1<<endl;

    //clear
    s1.clear();
    cout<<s1<<endl;


    //comparing strings
    s1="abc";
    s2="xyz";
    cout<<s2.compare(s1)<<endl;
    s1="abc";
    s2="abc";
    cout<<s2.compare(s1)<<endl;
    s1="abc";
    s2="xyz";
    cout<<s1.compare(s2)<<endl;

    //empty function
    s1.clear();
    if(s1.empty()){
        cout<<"String is empty"<<endl;
    }
    else{
        cout<<"String is not empty"<<endl;
    }

    //erase function
    s1="DoucheBag";
    cout<<s1<<endl;
    s1.erase(6,3);
    cout<<s1<<endl;

    //find function
    cout<<s1.find("che")<<endl;

    //insert function
    s1.insert(6,"Bag");
    cout<<s1<<endl;

    //length/size function
    cout<<s1.length()<<" "<<s1.size()<<endl;
    for(int i=0;i<s1.size();i++){
        cout<<s1[i];
    }
    cout<<endl;

    //substring function
    string s=s1.substr(6,3);
    cout<<s<<endl;

    //string to integer
    string num="456";
    cout<<num+'2'<<endl;
    int x=stoi(num);
    cout<<x+2<<endl;

    //integer to string
    // int y=10;
    // cout<<to_string(y) + '2' <<endl;

    //sorting a string
    //begin and end iterator
    s="qwertyuiopasdfghjklzxcvbnm";
    cout<<s<<endl;
    sort(s.begin(),s.end());
    cout<<s<<endl; 


    //uppercase and lowercase
    s="AbcHGIievuedJHFvdwu";
    cout<<s<<endl;
    //to uppercase
    for(int i=0;i<s.length();i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]-=32;
        }
    }
    cout<<s<<endl;
    //to lowercase
    for(int i=0;i<s.length();i++){
        if(s[i]>='A' && s[i]<='Z'){
            s[i]+=32;
        }
    }
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::toupper);
    cout<<s<<endl;
    transform(s.begin(),s.end(),s.begin(),::tolower);
    cout<<s<<endl;

    //printing largest number from the given string
    s="2349625453";
    sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;

    //calculating frequency of characters in a string
    s="wertyuijvcvbnvcsertyujbcftyuioi";
    int frequency[26];
    for(int i=0;i<26;i++){
        frequency[i]=0;
    }
    for(int i=0;i<s.size();i++){
        frequency[s[i]-'a']++;
    }
    int max=INT_MIN;
    char ans='a';
    for(int i=0;i<26;i++){
        if(frequency[i]>=max){
            max=frequency[i];
            ans=i+'a';
            // cout<<ans<<" "<<max<<endl;
        }
    }
    cout<<ans<<" "<<max<<endl;

    return 0;
}
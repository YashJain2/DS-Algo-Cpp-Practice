//Functions in C++
#include<iostream>
using namespace std;

//initializing function call
int subtract(int a, int b);

int add(int a, int b)
{
    return (a+b);
}

void display(int result)
{
    cout<<"The result is "<<result<<endl;
}


//Main function 
int main(){
    display(subtract(9,8)); //calling the function
    return 0;
}


//declaring function 
int subtract(int a, int b)
{
    return (a-b);
}
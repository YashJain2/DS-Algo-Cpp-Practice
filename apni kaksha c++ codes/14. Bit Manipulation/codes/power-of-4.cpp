#include<iostream>
using namespace std;

bool isPowerOfFour(long num) {
  return ((((num-1)&num)==0) && ((num-1)%3==0));
}

int main()
{
  cout<<isPowerOfFour(16)<<endl;
  return 0;
}

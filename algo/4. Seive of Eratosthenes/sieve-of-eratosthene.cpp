#include<iostream>
using namespace std;

//range -> 2-n printing prime numbers
void primeFactors(int n)
{
  int a[n+1];
  for(int i=0;i<=n;i++)
    a[i]=0;

  for(int i=2;i<=n;i++)
    if(a[i]==0)
      for(int j = i*i; j <= n; j += i)
        a[j]=1; 

  for(int i = 2 ; i <= n; i++)
    if(a[i]==0)
      cout<<i<<" ";
  cout<<"\n";
}


int main()
{
  primeFactors(70);
  return 0;
}

#include<iostream>
using namespace std;


//we store the smallest factors in the array of seive
//returns all prime factors of given numbers
void primeFactorizationSeive(int n)
{
  int a[n+1];
  for(int i=0;i<=n;i++)
    a[i]=i;

  for(int i=2;i<=n;i++)
  {
    if(a[i]==i)
    {
      for(int j = i*i; j<=n; j+=i)
      {
        if(a[j]==j)
        {
          a[j]=i;
        }
      }
    }
  }
  while(n!=1)
  {
    cout<<a[n]<<" ";
    n = n/a[n];
  }
}


int main()
{
  primeFactorizationSeive(70);
  return 0;
}

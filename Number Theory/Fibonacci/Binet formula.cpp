#include<iostream>
#include<cmath>
using namespace std;

unsigned long long int fib(int n)
{
  double phi = (1 + sqrt(5)) / 2;
  return round(pow(phi, n) / sqrt(5));
}
int main ()
{
  int n;
  cin >> n;
  for(int i=0; i<=93; i++)
    cout << i+1 << " : " << fib(i) << endl;
  return 0;
}

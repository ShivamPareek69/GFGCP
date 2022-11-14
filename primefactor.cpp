#include <iostream>
#include <math.h>
using namespace std;
int isprime(int x)
{
 for (int i = 2; i <= sqrt(x); i++)
 {
  if (x % i == 0)
  {
   return 0;
  }
 }

 return 1;
}
int main()
{

 int n;
 cin >> n;
 for (int i = 2; i <= n; i++)
 {
  if (isprime(i) && (n % i == 0))
  {
   while (n % i == 0)
   {
    cout << i << "*";
    n = n / i;
    // cout<<"\nvalue of x is "<<x;
   }

   
  }
 }

 return 0;
}
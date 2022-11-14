#include <iostream>
using namespace std;
bool isDivisor3(int num){ // Boolean  function for checking whether a number has 3 divisors or not.
 int check = 0;
 for (int i = 2; i < num; i++)
 {
  if (num % i == 0)
  {
   check++;
  }
 }
 if (check == 1)
 {
  return true;
 }
 else
 {
  return false;
 }
}
int main()
{
 int N, count = 0; // find the number of numbers till N which have 3 divisors
 cin >> N; //input N
 for (int i = 2; i <= N; i++)
 {
  if (isDivisor3(i))
  {
   count++;
  }
 }
 cout << count;

 return 0;
}

#include<iostream>
#include<math.h>
using namespace std;
int main(){
 int x;
 cin>>x;
 if (x==1)
 {
  cout<<"neither prime nor composite";
  return 0;
 }
 
 for (int i = 2; i <= sqrt(x); i++)
 {
  if (x%i==0)
  {
   cout<<"not prime";
   return 0;
  }
  
 }
 cout<<"prime";
 
return 0;
}
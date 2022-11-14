#include<iostream>
using namespace std;
 int gcd(int a,int b){
  if (b==0)
  {
   return a;
  }
  else {
   return gcd(b,a%b);
  }
  
 }
int main(){
 int a,b,c;
 cin>>a>>b;
 c=gcd(a,b);
 cout<<c;
return 0;
}
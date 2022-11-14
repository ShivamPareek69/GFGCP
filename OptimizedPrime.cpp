#include<iostream>
using namespace std;
bool isprime(int n){
 if(n==2||n==3){
  return true;
 }
 else if (n%2==0||n%3==0)
 {
  return false;
 }
 for (int i = 5; i*i <n ; i+=6)
 {
  if (n%i==0||n%(i+2)==0)
  {
   return false;
  }
  
 }
 return true;
}
int main(){
 int n;
 cin>>n;
 if(isprime(n)){
 cout<<"true";
 }
 else{
  cout<<"false";
 }
 return 0;
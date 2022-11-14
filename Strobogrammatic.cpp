#include<iostream>
using namespace std;
bool isStrobo(int n){
 int strobo=0;
 int real_n;
 real_n=n; //for holding the real value of n
 if(n>1&&n<10){
  return false; //handling single digits separately
 }
 while (n>0)
 {
  if(n%10==2||n%10==3||n%10==4||n%10==5||n%10==7){ //for rejecting mere palindromes 
   return false;
  }
  if(n%10==6){
  strobo=9+strobo*10;
  }
  else if (n%10==9){
   strobo=6+strobo*10;
  }
  else {
   strobo=n%10+strobo*10;
  }
  n/=10;
 } 
 if(real_n==strobo){
  return true;
 }
 else{
  return false;
 }
}
int main(){
int n;
cin>>n;
if(isStrobo(n)){
 cout<<"Yes the number is strobogrammatic";
}
else{
 cout<<"No the number is not strobogrammatic";
}
return 0;
}
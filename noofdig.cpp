#include<iostream>
using namespace std;
int main(){
 int x, count=0;
 cin>>x;
 if (x==0)
 {
  cout<<0;
  return 0;
 }
 
 while (x)
 {
  count++;
  x=x/10;

 }
 cout<<count;
 
return 0;
}
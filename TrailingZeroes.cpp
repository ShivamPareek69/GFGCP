#include<iostream>
using namespace std;
int main(){
 int x, sum=0,prod=5,val=1;
 cin>>x;
 while (val)
 {
  val=x/prod;
  sum+=val;
  prod*=5;


 }
 cout<<sum;
 
return 0;
}
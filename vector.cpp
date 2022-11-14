#include<iostream>
#include<vector>
using namespace std;
int main(){
 vector<int> v;
 cout<<"Size-> "<<v.capacity()<<endl;

 v.push_back(1);
 cout<<"Capacity-> "<<v.capacity()<<endl;
 v.push_back(1);
 cout<<"Capacity-> "<<v.capacity()<<endl;
 v.push_back(0);
 cout<<"Capacity-> "<<v.capacity()<<endl;
 cout<<"Size-> "<<v.size()<<endl;
 
 cout<<"Element at 2nd index "<<v.at(2)<<endl;

 cout<<"front "<< v.front()<<endl;
   
 
return 0;
}
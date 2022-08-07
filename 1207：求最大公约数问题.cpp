#include<iostream>
using namespace std;
int gcd(int m,int n)
{
  return n==0?m:gcd(n,m%n);
}
int main (){
  int n,m;
  cin>>n>>m;
  cout<<gcd(n,m);
   return 0;
}

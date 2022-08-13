#include<iostream>
using namespace std;
 void fun(int n)
{
  if(n==0)
    {
       return; 
    } 
  else{
    int t=n%2;
    fun(n/2);
    cout<<t;
  } 
    
}
int main (){
  int x;
  cin>>x;
  fun(x);
  cout<<x;
   return 0;
}

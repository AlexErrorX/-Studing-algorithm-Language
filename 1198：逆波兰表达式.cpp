#include<iostream>
#include<cstdio> 
#include<cstring>
using namespace std;
 char RPN[1000];//用来存储表达式
double f()
{
  cin>>RPN;
   if(RPN[0]=='+'){
      return f()+f(); 
   } 
   else if(RPN[0]=='-')
   {
      return f()-f();
   }
   else if(RPN[0]=='*')
   {
      return f()*f();
   }
   else if (RPN[0]=='/')
   {
      return f()/f();
   }
   else{
      return atof(RPN);//转换为浮点数相加
   }
}
int  main (){
  printf("%f\n", f());
   return 0;
}

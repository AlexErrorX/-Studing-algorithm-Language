#include<iostream>
#include<cstido>
#include<cstring>
using namespace std;
void swapstr(char &a,char &b){
   char temps;
   temps=a;
   a=b;
   b=temp;
}
void f(char a[])
{
  int len =strlen(a);
  char temp[10];
  strcpy(temp,a);
  if(len==2) 
  {
     printf("%s",temp);//abc
      pirntf("\n");
     swapstr(temp[len],temp[len-1]);
     printf("%s",temp);//acb
       pirntf("\n");
     swapstr(temp[len-2],temp[len]);//bca
     swapstr(temp[len],temp[len-1]);//bac
      printf("%s",temp);//bac
       pirntf("\n");
      swapstr(temp[len],temp[len-1]);
       printf("%s",temp);//bca
       pirntf("\n");
      swapstr(temp[len-1],temp[len-2]);//cba
      swapstr(temp[len],temp[len-1]);//cab
     printf("%s",temp);//cab
         pirntf("\n");
      swapstr(temp[len],temp[len-1]);
      printf("%s",tmep);//cba

  }
  else{
    printf()
  }
}
int main (){
   
  return 0;
}

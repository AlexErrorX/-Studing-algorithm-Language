#include<iostream>
#include<cstring>
using namespace std;
int a[200];
int b[200];
char A[200];
char B[200];
int S[200];
int main (){
  cin>>A>>B;
  int lena=strlen(A);
  int lenb=strlen(B);
  //存储
  for(int i=0;i<lena;i++){
    a[i]=A[lena-i-1]-'0';
  }
 for(int i=0;i<lenb;i++){
    b[i]=B[lenb-i-1]-'0';
  }
 int maxlen=max(lena,lenb);//和的长度
  //加法
 for(int i=0;i<maxlen;i++)
 {
   int t=(a[i]+b[i])/10; 
   S[i]+=a[i]+b[i];
   S[i+1]+=t;
   S[i]%=10;
 }
 int stop=0;
 while(S[stop]==0)
 {
    stop++;
 }
 for(int i=maxlen-1;i>=stop;i--)
 {
    cout<<S[i];
 }
   return 0;
}

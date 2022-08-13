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
    S[i]+=a[i]+b[i];//错误点1，这里不要用临时变量t 如： 99+9   如果是十位运算，那么t=a[i]+b[i]结果是9，不进位
    S[i+1]+=S[i]/10;
    S[i]%=10;
 } 
 while (S[maxlen]==0&&maxlen>0)
 {
    maxlen--;
 }
for(int i=maxlen;i>=0;i--)
{
   cout<<S[i];
}
   return 0;
}

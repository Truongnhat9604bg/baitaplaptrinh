#include <bits/stdc++.h>
using namespace std;

// cộng hai số nguyên lớn 
void daonguoc(int x[],int n){
  int l=0,r=n-1;
  while(l<r){
    int t=x[l];
    x[l]=x[r];
    x[r]=t;
    l++;
    r--;
  }
}
//p1 lớn hơn p2
void tongsolon(string n,string m){
  int d1=n.length(),d2=m.length();
  int p1[d1],p2[d1],p3[d1+1];
  for(int i=0;i<d1;i++)
  p1[i]=n[i]-'0';
  for(int i=0;i<d2;i++)
  p2[i]=m[i]-'0';
   daonguoc(p1,d1);
   daonguoc(p2,d2);
  for(int i=d2;i<d1;i++){
    p2[i]=0;
  }
  int nho=0;
  for(int i=0;i<d1;i++){
    int tong=p1[i]+p2[i]+nho;
  if(tong>=10){
    p3[i]=tong%10;
    nho=tong/10;
  }else{
  p3[i]=tong;
  nho=tong/10;
  }
}
if(nho)
cout << nho;
for(int i=d1-1;i>=0;i--){
  cout << p3[i];
    }
}
int main(){
  string s,t;
  cin >> s;
  cin >> t;
  if(s.length()>=t.length())
  tongsolon(s,t);
  else tongsolon(t,s);
  system("pause");
}
/* 812317349123232323232323232323232323232318247124
12316237123333333333333333333331231812317349123232323232323232323232323232318247124
12316237123333333333333333333331231 */
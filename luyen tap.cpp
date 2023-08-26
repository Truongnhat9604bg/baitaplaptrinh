#include <bits/stdc++.h>
using namespace std;
// kiểm tra số fibonaxi sử dụng mảng

/* long long p[100];
void kiemtra(){
    p[0]=0,p[1]=1;
    for(int i=2;i<93;i++){
         p[i]=p[i-1]+p[i-2];
    }
}
int main(){
  kiemtra();
  int c;
  cin >> c;
  while(c--){
    int y;
    cin >> y;
    cout << p[y] << endl;
  }
  system("pause");
} */

/* int main(){
  int n;
  cin >> n;
  int p[n];
  for(int i=0;i<n;i++){
    cin >> p[i];
  }
  int max=p[0],min= p[0];
  for(int i=1;i<n;i++){
    if(p[i]> max){
      max=p[i];
    }
    if(p[i]<min){
      min =p[i];
    }
  }
  cout << max << " " << min << endl;
  system("pause");
} */


// đếm số ký tự khác nhau 
/* int main(){
char n[1005];
cin >> n;
int p[26]={0};
for(int i=0;i<strlen(n);i++){
     p[n[i]-'a']++;  //số lần xuất hiện của ký tự 
}
for(int i=0;i<strlen(n);i++){
  if(p[n[i]-'a']){
    cout << n[i] << " " << p[n[i]-'a'] << endl;
    p[n[i]-'a']=0;
  }
}
  system("pause");
} */
int main(){
  string n;
  getline(cin,n);
  stringstream s(n);
  string min;
  system("pause");
}
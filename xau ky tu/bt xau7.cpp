/*Bài 12: Đổi chỗ 1 chữ số để tạo số lớn nhất nhỏ hơn N cho trước
Bài 13: sắp đặt xâu ký tự
Bài 14: tổng lớn nhất và nhỏ nhất của 2 số
Bài 15: tổng các chữ số có mặt trong xâu
*/
#include <iostream>
using namespace std;
void bailam(){
    string s;
    cin >> s;
    int i=s.length()-2;
    while(i>=0 && s[i]<=s[i+1]){
        --i;
    }
    if(i==-1){
        cout << "-1\n";
        return;
    }
    int j=s.length()-1;
    while(s[i]<=s[j] || (s[j]==s[j-1] && s[i]>s[j])){
         --j;
    }
    swap(s[i],s[j]);
    if(s[0]=='0'){
        cout << "-1\n";
    }else{
        cout << s << endl;
    }
}

void tongnho(string s,string t){
    for(char &x : s){
        if(x=='6')
        x='5';
    }
    for(char &x : t){
        if(x=='6')
        x='5';
    }
   cout << stoll(s)+stoll(t);
}

void tonglon(string x,string y){
    for(char &z : x){
        if(z=='5')
        z='6';
    }
    for(char &z : y){
        if(z=='5')
        z='6';
    }
   cout << stoll(x)+stoll(y);
}
int main(){
   // bailam();

    /* string s;
    cin >> s;
    int p[256]={0};
    for(char x : s){
        p[x]++;
    }
    int m=0;
    for(int i=0;i<256;i++){
        m=max(m,p[i]);
    }
    if(m-(s.length()-m)<=1){
        cout <<  1 << endl;
    }else{
        cout <<  0 << endl;
    } */

  /* string s,n;
  cin >> s >> n;
  tongnho(s,n);
  cout << ' ';
  tonglon(s,n); */

  string g;
  cin >> g;
  int tong =0;
  int cnt=0;
  int m=0;
  for(char x : g){
      if(isdigit(x))
        tong=tong*10 + x -'0';
        else{
           // cnt+=tong;
           m=max(m,tong);
            tong =0;
        }
  }

  m=max(m,tong);
  cout << m << endl;
  /* cnt+=tong;
  cout << cnt <<  endl; */
    system("pause");
}

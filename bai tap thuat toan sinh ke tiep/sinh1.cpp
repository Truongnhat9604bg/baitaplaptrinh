/*Bài 1: xâu nhị phân kế tiếp
Bài 2: tập con kế tiếp
Bài 3: hoán vị kế tiếp
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
      /* string s;
      cin >> s;
   int i=s.size()-1;
   while(i>=0 && s[i]=='1'){
           s[i]='0';
       --i;
   }
   if(i>=0)
   s[i]='1';
  cout << s; */


  /* int n,k;
  cin >> n >> k;
  vector<int> v;
  v.push_back(-1);
  for(int i=1;i<=k;i++){
     int x;
     cin >> x;
     v.push_back(x);
  }
  int i=k;
  while(i>=1 && v[i]== n-k+i){
      --i;
  }
  if(i){
     v[i]++;
     for(int j=i+1;j<=k;j++){
        v[j]=v[j-1]+1;
     }
  }else{
    v.clear();
    v.push_back(-1);
    for(int i=1;i<=k;i++){
        v.push_back(i);
    }
  }
 for(int i=1;i<=k;i++){
    cout << v[i] << ' ';
 } */

 int n;
 cin >> n;
 vector<int> v;
 for(int i=0;i<n;i++){
    int x;
    cin >> x;
    v.push_back(x);
 }
 int cnt=1;
    while(next_permutation(v.begin(),v.end())){
        for(int t : v){
            cout << t << ' ';
        }
        cnt=0;
        break;
    }
    if(cnt){
       for(int i=1;i<=n;i++){
          cout << i << ' ';
       }
    }
    system("pause");
}
/*Bài 9: số lớn nhất, nhỏ nhất có m chữ số và có tổng bằng s
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int m,s;
    cin >> m >> s;
    if(s>m*9 || (s==0 && m>1)){
        cout << "-1 -1";
    }else{
    int s1=s-1;
    //số lớn nhất
    int i=1;
while(i<=m){
    if(s>=9){
        cout << 9;
        s-=9;
    }else{
         cout << s;
         ++i;
         break;
    }
    ++i;
}
  while(i<=m){
     cout << 0;
     ++i;
  }
   vector<int> v;
   int j=1;
 while(j<=m){
     if(s1>=9){
        v.push_back(9);
        s1-=9;
     }else{
        v.push_back(s1);
        ++j;
        break;
     }
     ++j;
 }
int cnt=0;
   while(j<=m){
        cnt=1; 
      if(j==m)
      v.push_back(1);
      else v.push_back(0);
      ++j;
   }
   cout << ' ';
   if(!cnt){
      v.back()+=1;
   }
   for(int i=v.size()-1;i>=0;i--){
     cout << v[i];
   }
}
   cout  << endl;
    system("pause");
}
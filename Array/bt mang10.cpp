/*Bài 16. Sắp xếp lại mảng bằng các thao tác hoán vị với chỉ số cho trước
       nguồn: video #8.2 c++ 28tech
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
       int n,x;
       cin >> n >> x;
       int p[n];
       int a[100]={0};
       for(int i=0;i<n;i++){
          cin >> p[i];
       }
     for(int i=0;i<x;i++){
       int t;
       cin >> t;
       a[t-1]=1;
     }
      for(int i=0;i<n;i++){
         if(a[i]==0)
         continue;
         int idx=i;
         while(idx < n && a[idx] ){
              ++idx;
         }
         sort(p+i,p+idx+1);
         i=idx;
      }
      int ok=1;
      for(int i=1;i<n;i++){
          if(p[i]<p[i-1])
          ok=0;
      }
      if(ok)
      cout << "YES" << endl;
      else cout << "NO" << endl;
       system("pause");
}
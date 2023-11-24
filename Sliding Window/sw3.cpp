/*Bài 4: cửa sổ trùng nhau
Bài 5: cửa sổ trùng nhau 2
*/
#include <bits/stdc++.h>
using namespace std;
bool check(int a[],int n,int k){
     set<int> s;
     for(int i=0;i<k;i++){
         if(s.count(a[i]))
          return true;
          s.insert(a[i]);
     }
     for(int i=k;i<n;i++){
         s.erase(a[i-k]);
         if(s.count(a[i]))
          return true;
          s.insert(a[i]);
     }
     return false;
}

bool check1(int a[],int n,int k,int t){
   multiset<int> se;
   for(int i=0;i<k;i++){
      auto it=se.lower_bound(a[i]-t);
      if(it!=se.end() && *it <= a[i]+t){
          return true;
      }
      se.insert(a[i]);
   }
   for(int i=k;i<n;i++){
      se.erase(se.find(a[i-k]));
      auto it=se.lower_bound(a[i]-t);
      if(it!=se.end() && *it <=a[i]+t){
          return true;
      }
      se.insert(a[i]);
   }
   return false;
}

int main(){
   int n,k,t;
   cin >> n >> k >> t;
   int p[n];
   for(int &x : p){
    cin >> x;
   }
   if(check1(p,n,k,t))
   cout << "YES" << endl;
   else cout << "NO" << endl;
    system("pause");
}
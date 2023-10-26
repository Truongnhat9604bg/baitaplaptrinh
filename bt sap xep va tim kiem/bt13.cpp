/*bài 30: tìm hợp và giao của 2 mảng*/
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int p[n],a[m];
    vector<int> vh,vg;
    for(int i=0;i<n;i++){
      cin >> p[i];
   }
   for(int i=0;i<m;i++){
      cin >> a[i];
   }
   int i=0,j=0;

   while(i<n && j<m){
         if(p[i]<a[j]){
            vh.push_back(p[i]);
            ++i;
         }else if(p[i]>a[j]){
            vh.push_back(a[j]);
            ++j;
         }else{
            vg.push_back(p[i]);
            vh.push_back(p[i]);
            ++i;
            ++j;
         }
   }
   
   while(i<n){
      vh.push_back(p[i]);
      ++i;
   }
   while(j<m){
    vh.push_back(a[j]);
    ++j;
   }
   for(int x : vh){
    cout << x << " ";
   }
   cout << endl;
   for(int x : vg){
    cout << x << ' ';
   }
    system("pause");
}
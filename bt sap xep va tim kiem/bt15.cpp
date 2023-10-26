/*bài 32: sắp xếp chữ số
  bài 33: sắp xếp theo tần suất
*/
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;
map<int,int> mp;
int cmp(int a,int b){
    if(mp[a]!=mp[b])
      return mp[a]>mp[b];
      else return a<b; 
}
int main(){
    /* int n;
    cin >> n;
    int p[n];
    set<int> s;
    for(int &x : p){
        cin >> x;
        while(x){
            s.insert(x%10);
            x/=10;
        }
    }
   for(auto it : s){
      cout << it << ' ';
   } */

   int n;
   cin >> n;
   int p[n];
   for(int i=0;i<n;i++){
    cin >> p[i];
    mp[p[i]]++;
   }
   sort(p,p+n,cmp); 
   for(int i=0;i<n;i++){
    cout << p[i] << " ";
   }
    system("pause");
}
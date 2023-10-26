/*bài 38: xếp hàng
  bài 40: tìm phần tử lặp đầu tiên
*/
#include <bits/stdc++.h>
using namespace std;
bool cnt[100001];
int main(){
    /* int n;
    cin >> n;
    pair<int,int> p[n];
    for(int i=0;i<n;i++){
        cin >> p[i].first >> p[i].second;
    }
    sort(p,p+n);
    int end=p[0].first+p[0].second;
    for(int i=1;i<n;i++){
        end=max(end,p[i].first)+p[i].second;
    }
    cout << end << endl; */
memset(cnt,true,sizeof(cnt));
   int n;
   cin >> n;
   int p[n];
   for(int &x : p){
    cin>> x;
   }
   int ok=0;
   for(int i=0;i<n;i++){
       if(cnt[p[i]]){
          cnt[p[i]]=false;
       }else{
        ok=1;
         cout << p[i] << endl;
         break;
       }
   }
   if(!ok)
   cout << -1 << ' ';
    system("pause");
}
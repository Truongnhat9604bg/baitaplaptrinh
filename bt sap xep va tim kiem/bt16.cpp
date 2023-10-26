/*bài 35: giao của 3 dãy số*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,l;
    cin >> n >> m >> l;
    int p[n],a[m],b[l];
    for(int i=0;i<n;i++){
      cin >> p[i];
   }
   for(int i=0;i<m;i++){
      cin >> a[i];
   }
   for(int i=0;i<l;i++){
    cin >> b[i];
   }
   vector<int> giao;
   int i=0,j=0,k=0;
  while(i<n && j<m && k<l){
      if(p[i]==a[j] && a[j]==b[k] && b[k]==p[i]){
        giao.push_back(p[i]);
        ++i;++j;++k;
      }else if(p[i]<=a[j] && p[i]<=b[k]){
         ++i;
      }else if(a[j]<=p[i] && a[j]<=b[k]){
        ++j;
      }else{
        ++k;
      }
  }
  if(giao.size()==0){
    cout << -1 << " ";
  }else{
   for(int x : giao){
    cout << x << " ";
     }
  }
    system("pause");
}
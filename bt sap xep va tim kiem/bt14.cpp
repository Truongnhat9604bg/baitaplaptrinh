/*bài 31: sắp xếp lại dãy con

*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
  int n;
  cin >> n;
  int p[n];
  for(int &x : p){
    cin >> x;
  }
  int l,r;
  for(int i=0;i<n-1;i++){
      if(p[i]>p[i+1]){
          l=i;
          break;
      }
  }
  for(int i=n-1;i>0;i--){
      if(p[i]<p[i-1]){
        r=i;
        break;
      }
  }
  int maxp=*max_element(p+l,p+r+1);
  int minp=*min_element(p+l,p+r+1);
  for(int i=0;i<=l;i++){
       if(p[i]>minp){
        l=i;
        break;
       }
  }
   for(int i=n-1;i>=r;i--){
      if(p[i]<maxp){
        r=i;
        break;
      }
  }
 cout << l+1 << ' ' << r+1 << endl;
    system("pause");
}
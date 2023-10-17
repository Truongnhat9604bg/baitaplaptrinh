/*tìm ước chung lớn nhất của mọi cặp số trong mảng
      cho mảng các số nguyên dương,tìm ước chung lớn nhất của 2 số bất kỳ trong dãy
*/
#include <iostream>
#include <map>
#include <cmath>
using namespace std;
map<int,int> m;
void ok(int a){
     for(int i=1;i<sqrt(a);i++){
        if(a%i==0){
            m[i]++;
            if(m[a/i]!=a)
            m[a/i]++;
        }
     }
}
int main(){
  int n;
  cin >> n;
  int p[n];
  for(int &x : p){
    cin >> x;
    ok(x);
  }
   int cnt=1;
  for(auto it : m){
    if(it.second >=2)
    cnt=it.first;
  }
  cout << cnt << " ";
    system("pause");
}
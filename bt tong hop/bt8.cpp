/*bài 17 máy tính
       nguồn: video #8.2 c++ 28tech
*/
#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    int p[n];
    for(int &x : p){
        cin >> x;
    }
  int cnt=1;
  for(int i=1;i<n;i++){
    if(p[i]-p[i-1]<=x)
      ++cnt;
      else cnt=1;
  }
   cout << cnt << endl;
    system("pause");
}
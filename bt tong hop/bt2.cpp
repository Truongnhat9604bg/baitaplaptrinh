/*bài 14: nhà gần nhất
       nguồn: video #20 c++ 28tech
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
  sort(p,p+n);
   int m=INT_MAX;
   for(int i=1;i<n;i++){
      m=min(m,p[i]-p[i-1]);
   }
   cout << m << " ";
    system("pause");
}
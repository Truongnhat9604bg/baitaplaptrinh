/*bài 19: phân tích nhóm
       nguồn: The 2014 ACM-ICPC Asia
       source code: #20 c++ 28tech
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int t,r=1;
    cin >> t;
    while(t>=r){
    int n,k;
    cin >> n >> k;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    int cnt=1;
    sort(p,p+n);
  for(int i=1;i<n;i++){
       if(p[i]-p[i-1]>k)
       ++cnt;
        }
      cout << "Case " << "#" << r << ": " << cnt << endl;
      ++r;
    }
    system("pause");
}
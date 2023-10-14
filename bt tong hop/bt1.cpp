/*bài 13: Khiêu vũ
  nguồn: video #20 c++ 28tech
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int p[n],a[m];
    for(int &x : p){
        cin >> x;
    }
    for(int &y : a){
        cin >> y;
    }
    sort(p,p+n);
    sort(a,a+m);
    int i=0,j=0,cnt=0;
    while(i<n && j<m){
          if(p[i]>a[j]){
            ++cnt;
            ++i;
            ++j;
          }else ++i;
    }
    cout << cnt << " ";
    system("pause");
}
/*bài 15: vắt sữa bò
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
    sort(p,p+n,greater<int>());
    int cnt=0;
    for(int i=0;i<n;i++){
         if(p[i]-i>0){
            cnt+=(p[i]-i);
         }
    }
    cout << cnt << " ";
    system("pause");
}
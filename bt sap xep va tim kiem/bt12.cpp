/*bài 28: điền số còn thiếu
bài 29: sắp xếp theo giá trị tuyệt đối
*/
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
int n,x;  //biến toàn cục (ngoài hàm main)
bool cmp(int a,int b){
    return abs(x-a) <abs(x-b);
}
//int cnt[100001];
int main(){
   /*  int n;
    cin >> n;
    int p[n];
    for(int &x : p){
        cin >> x;
        cnt[x]++;
    }
    sort(p,p+n);
    int tmp=0;
    for(int i=p[0];i<=p[n-1];i++){
         if(cnt[i]==0)
           tmp++;
    }
   cout << tmp << ' '; */
 
   cin >> n >> x;
   int p[n];
   for(int i=0;i<n;i++){
    cin >> p[i];
   }
   stable_sort(p,p+n,cmp);
   for(int i=0;i<n;i++){
      cout << p[i] << ' ';
   }
    system("pause");
}
/*bài 21: in theo khuôn dạng
bài 26: tích của 2 số lớn nhất và nhỏ nhất của 2 mảng 
bài 27: hợp nhất 2 mảng 
                
*/
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    /* int n;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    sort(p,p+n);
    int l=0;
    int r=n-1;
    int mid=n/2;
    while(l<r){
        cout << p[r] << ' ' << p[l] << ' ';
        ++l;
        --r;
        if(l==r && mid%2!=0)
         cout << p[r] << ' ';
    } */

    /* int n,m;
    cin >> n >> m;
    int p[n],a[m];
    long long max=LONG_LONG_MIN;
    long long min=LONG_LONG_MAX;
   for(int i=0;i<n;i++){
      cin >> p[i];
      if(p[i]>=max){
        max=p[i];
      }
   }
   for(int i=0;i<n;i++){
      cin >> a[i];
      if(a[i]<=min){
        min=a[i];
      }
   }
    cout << max*min << " "; */

    int n,m;
    cin >> n >> m;
    int pa[m+n];
    for(int i=0;i<n+m;i++){
      cin >> pa[i];
   }
 sort(pa,pa+n+m);
 for(int x : pa){
    cout << x << " ";
 }
   
    system("pause");
}
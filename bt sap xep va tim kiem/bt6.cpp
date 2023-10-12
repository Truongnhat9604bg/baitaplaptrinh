/*tìm Vị trí đầu tiên (cuối cùng) của phần tử x trong mảng đã sắp xếp
    input 5 3
          1 2 3 3 3
    output 3 ,(cuối) 5

    có thể tự code hàm tìm kiếm nhị phân
    bài 2: đếm số lần xuất hiện của phần tử x trong mảng đã sắp xếp
*/
#include <iostream>
#include <algorithm>
#define ok system("pause")
using namespace std;

//tìm vị trí cuối
int cuoi(int a[],int s,int x){
    int rs=-1,l=0,r=s-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]==x){
            rs=m+1;
            l=m+1;
        }else if(a[m]>x)
             r=m-1;
             else l=m+1;
    }
    return rs;
}
int main(){
   int n,x;
   cin >> n >> x;
   int p[n];
  for(int i=0; i<n;i++){
    cin >> p[i];
  }
   auto it = lower_bound(p,p+n,x);

 /* vị trí đầu tiên
   if(*it==x){
    cout << (it-p)+1 << endl;
  }else cout << "-1" << endl;  */

  cout << cuoi(p,n,x) - (it-p+1) +1 << endl;
  ok;
}
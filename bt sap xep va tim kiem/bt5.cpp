/*Kiểm tra xem phần tử x có nằm trong mảng đã được sắp xếp hay không, nếu có ỉn ra 1 ngược lại in 0
           input 6 4
                 1 1 2 0 7 8
             
*/
#include <iostream>
#include <algorithm>
#define ok system("pause")
using namespace std;
bool timkiem(int a[],int s,int x){
    int l=0,r=s-1;
    while(l<=r){
         int m=(l+r)/2;
        if(a[m]==x)
        return true;
        else if(a[m]<x)
        l=m+1;
        else r=m-1;
    }
    return false;
}
int main(){
    int n,x;
    cin >> n >> x;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
/*   int t=binary_search(p,p+n,x);
  if(t)
  cout << t << endl;
  else cout << t << endl; */
  cout << timkiem(p,n,x) << endl;
  ok;

}
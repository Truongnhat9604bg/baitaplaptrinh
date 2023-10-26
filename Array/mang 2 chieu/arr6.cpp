/*bài 10: in ra ma trận hình xoắn ốc thuận
  bài 11:in ra ma trận hình xoắn ốc ngược
     tip: tạo vector rồi lưu pt của ma trận xoắn ốc thuận rồi in ngược lại

     bài 12: in ra phần tử thứ k trong phép duyệt xoắn ốc của ma trận
     bài 13: in ra ma trận xoắn ốc tăng dần
     tip: tạo mảng 1 chiều lưu các phần tử của ma trận rồi sắp xếp(sort) sau đó thực hiện lưu các phần tử
          vào mảng 2 chiều khi duyệt xoắn ốc
*/
#include <iostream>
#include <vector>
using namespace std;
int main(){
   int n,m,k;
   cin >> n >> m >> k;
   int p[n][m];
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++) cin >> p[i][j];
   }
   vector<int> v;
   int h1=0,h2=n-1,c1=0,c2=m-1;
   while(h1<=h2 && c1<=c2){
    for(int i=c1;i<=c2;i++){
        cout << p[h1][i] << " ";
        v.push_back(p[h1][i]);
    }
      h1++;
      for(int i=h1;i<=h2;i++){
        cout << p[i][c2] << " ";
         v.push_back(p[i][c2]);
      }
      c2--;
      if(h1<=h2){
        for(int i=c2;i>=c1;i--){
            cout << p[h2][i] << " ";
            v.push_back(p[h2][i]);
        }
        h2--;
      }
      if(c1<=c2){
        for(int i=h2;i>=h1;i--){
            cout << p[i][c1] << " ";
            v.push_back(p[i][c1]);
           }
        c1++;
        }
        cout << endl;
    }
    for(int i=0;i<v.size();i++){
        if(i==k)
        cout << v[i-1] << " ";
    }
    system("pause");
}
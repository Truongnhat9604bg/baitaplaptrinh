/*bài 1: liệt kê các số nguyên tố trong ma trận
 bài 2: tìm phần tử lớn nhất trong ma trận và in ra vị trí xuất hiện của pt đó
*/
#include <iostream>
#include <cmath>
using namespace std;
int nt(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
          return 0;
    }
    return x>1;
}
int a[100001]={0};
//sử dụng map để đánh dấu phần tử nếu đk bài toán là -1e9 <= x <= 1e9

int main(){
    int n,m;
    cin >> n >> m;
    int p[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> p[i][j];
        }
    }
    int mx=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
          if(p[i][j]>=mx){
            mx=max(mx,p[i][j]);             
            }   
        }
    }
    cout << mx << endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(p[i][j]==mx){
                cout << "Vi tri xuat hien " << ": A[" << i+1 << "][" << j+1 << "]" <<endl; 
            }
        }
    }
    system("pause");
}
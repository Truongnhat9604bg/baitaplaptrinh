/*bài 5: tổng các phần tử thuộc tam giác dưới
   bài 8: biên của ma trận
   bài 9: in ra ma trận hình con rắn
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> p[i][j];
        }
    }
    long long cnt=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
        for(int j=0;j<n;j++){
                cout << p[i][j] << " ";
            }
        }else{
            for(int j=n-1;j>=0;j--){
                cout << p[i][j] << " ";
            }
        }
    }
    system("pause");
}
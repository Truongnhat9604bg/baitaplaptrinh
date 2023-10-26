/*bài 6: thay thế phần tử của ma trận
        tip: sử dụng 2 mảng 1 chiều để lưu độ thay đổi giữa các phần tử khi thay thế
        video giải thích: #11.1 c++ 28tech
*/
#include <iostream>
using namespace std;

//tạo 8 chỉ số di chuyển tới 8 phần tử xung quanh pt cần thay đổi
int dx[8]={-1,-1,-1,0,0,1,1,1};
int dy[8]={-1,0,1,-1,1,-1,0,1};
int main(){
    int n,m;
    cin >> n >> m;
    int p[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin >> p[i][j];
    }
    
    //sử dụng thêm 1 mảng 2 chiều để lưu các phần tử sau khi dc thay thế
    //phải giữ nguyên mảng ban đầu để tiến hành cộng các phần tử rồi thay thế
    int a[500][500];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            //tạo chỉ số của pt cần thay đổi
            int cnt=p[i][j];
            for(int l=0;l<8;l++){

                //lấy ra chỉ số của pt xung quanh để cộng cho pt cần thay đổi
                int newi=i+dx[l];
                int newj=j+dy[l];

                //kiểm tra nếu chỉ số pt xung quanh đó không vượt quá giới hạn của mảng thì tiến hành cộng các pt lại
                if(newi>=0 && newi <n && newj>=0 && newj<m){
                    cnt+=p[newi][newj];
                }
            }
            //lưu chỉ số pt đã dc thay đổi vào mảng mới tạo
            a[i][j]=cnt;
        }
    }
   for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout << a[i][j] << " ";
      }
    cout << endl;
   }

    system("pause");
}

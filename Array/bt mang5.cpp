//bài toán đổi tiền
//sử dụng thuật toán tham lam
#include <iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   int cnt=0;
   int p[10]= {1000,500,200,100,50,20,10,5,2,1};
   for(int i=0;i<10;i++){
       cnt+=n/p[i];
       n%=p[i];
   }
   cout << cnt << endl;
   system("pause");
}


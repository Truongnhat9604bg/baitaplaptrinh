/*Bài 23: nguyên tố cùng nhau
       tip: 2 số nguyên tố cùng nhau nếu có ucln là 1
       bài 24: phi hàm euler (đếm các số nguyên tố cùng nhau từ 1 -> n)
       tip: sử dụng công thức n-n/p
       trong đó: p là các thừa số nguyên tố của n
       bài 25: lũy thừa nhị phân
       Bài 11: số fibonaxi
*/
#include <iostream>
using namespace std;
int ucln(int a,int b){
    if(b==0)
    return a;
    else return ucln(b,a%b);
}
//hàm tính lũy thừa
/* long long tich(int a,int b){
    long long cnt=1;
    while(b){
        if(b%2!=0)
          cnt*=a;
          b/=2;
          a*=a;
    }
} */
long long a[93];
void fibo(){
    a[0]=0,a[1]=1;
    for(int i=2;i<93;i++){
        a[i]=a[i-1]+a[i-2];
    }
}
int main(){
    fibo();
   long long n,ok=1;
   cin >> n;
   for(int i=0;i<93;i++){
       if(n==a[i]){
         cout << "YES" << endl;
         ok=0;
         break;
       }
   }
   if(ok)
   cout << "NO" << endl;
    system("pause");
}
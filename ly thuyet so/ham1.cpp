//kiểm tra 1 số nguyên tố xem là tổng của nó có nằm trong dãy fibonaxi không?
#include <iostream>
#include <cmath>
using namespace std;

//hàm kiểm tra xem 1 số có phải số fibonaxi không?
int fibo(long long n){
  if(n==0 || n==1)
  return 1;
  long long fn1=0,fn2=1;
  for(int i=3;i<=50;i++){
    long long fn=fn1+fn2;
    if(fn==n)
    return 1;
    fn2=fn1;
    fn1=fn;
    }
    return 0;
}
bool nt(int n){
    for(int i=2;i<=sqrt(n);i++){
         if(n%i==0)
         return false;
    }
    return n>1;
}
//đếm số hoàn hảo trong đoạn
int main(){
    int l,r,tmp=1;
    cin >> l >> r;
    for(int i=l;i<=r;i++){
           if(nt(i)){
            long long cnt=0;
            int ok=i;
            while(ok){
                  cnt+=(ok%10);
                  ok/=10;
            }
              if(fibo(cnt)){
                  cout << i << " ";
                  tmp=0;
              }
         }
    }
    if(tmp)
    cout << "-1" << endl;
  system("pause");
}

/*
int p[100001];
void sang(){
    for(int i=0;i<=100000;i++)
    p[i]=i;
    for(int i=2;i<=sqrt(100000);i++){
        if(p[i]){
            for(int j=i*i;j<=100000;j+=i){
                if(p[j]==j){
                    p[j]=i;
                }
            }
        }
    }
}
void pt(int a){
    while(a!=1){
    int c=0,t=p[a];
    while(a%t==0){
        c++;
        a/=t;
    }
    cout << t << "(" << c << ")" << " ";
    }
}
void pt2(int a){
    while(a!=1){
        cout << p[a] << " ";
        a/=p[a];
    }

}


int main(){
    sang();
    int n;
    cin >>n;
   for(int i=1;i<=n;i++){
      int x;
      cin >> x;
      cout << "#TC" << i << ":";
      pt2(x);
      cout << "\n";
   }
} 
*/
#include <iostream>
#include <math.h>
using namespace std;

/* void pt(int n) {
int r = 0;
for (int i = 2; i <= sqrt(n); i++) {
int c = 0;
while(n % i == 0){
++c;
n /= i;
}
     if(c == 1) {
++r;
}
     }
if (n != 1){
++r;
}
if(r >=3){
cout << "1" << endl;
}else{
cout << "0" << endl;
}
}

int main(){
int x;
cin >> x;
while (x--) {
   int z;
   cin >> z;
   pt(z);
   } */
/* long long chinhphuong(long long n){
  long long s=sqrt(n);
  if(s*s==n)
    return 1;
 return 0; 
  
}*/
//kiểm tra số chính phương trong đoạn + đếm số cp
/* int main(){
    int x;
    cin >> x;
    while(x--){
        int l,r,cnt=0;
        cin >> l >> r;
        int z=sqrt(l),t=sqrt(r);
        if(z*z!=l)
        z++;
        for(int i=z;i<=t;i++){
               // cout << i*i << " ";
            cnt++;
        }
        cout << cnt << endl;
    }
       system("pause");
} */

// check số hoàn hảo đến 10^18
// có thể dùng mảng để duyệt các số hoàn hảo bằng cách tạo 1 mảng rồi lưu các số hoàn hảo vào mảng đó
int check(int n){
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            return 0;
        }
    }
    return n>1;
}
// xây dựng hàm số hoàn hảo
long long ok(long long a){
    for(int i=1;i<=32;i++){
        if(check(i)){
           int s=(int)pow(2,i)-1;
            if(check(s)){
                long long hh=(long long)s * (int)pow(2,i-1);
                if(hh==a)
                    return 1;
            }
        }
    }
    return 0;
}

int main(){
    int z;
    cin >> z;
    while(z--){
        long long d;
        cin >> d;
        if(ok(d)){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
   
    system("pause");
}
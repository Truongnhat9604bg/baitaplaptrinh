#include <iostream>
using namespace std;
using ll=long long;
const int mod= (int) 1e9+7;

//nhân ma trận
void tich(ll a[2][2],ll b[2][2]){
    ll cnt[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cnt[i][j]=0;
            for(int k=0;k<2;k++){
                cnt[i][j]+= a[i][k]*b[k][j] %mod;
            }
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a[i][j]=cnt[i][j];
        }
    }
}

//áp dụng pp lũy thừa nhị phân, tính số fibonaxi thứ n
void fiboNum(ll n){
   ll cnt[2][2]={{1,0},{0,1}};
   ll a[2][2]={{1,1},{1,0}};
   while(n){
    if(n%2!=0){
    tich(cnt,a);    
       }
       tich(a,a);
       n/=2;
   }
   cout << cnt[0][1] << endl;
}

int main(){
    ll x;
    cin >> x;
    fiboNum(x);
    system("pause");
}
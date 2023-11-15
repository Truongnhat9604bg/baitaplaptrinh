/*CÁC BÀI TOÁN VỀ SỐ NGUYÊN TỐ
   *thuật toán sàng số nguyên tố
   *phân tích thừa số nguyên tố
*/
#include <iostream>
#include <cmath>
using namespace std;
int a[1000001];
void ptnt(int x){
    int c=x;
    cout << x << " = ";
    for(int i=2;i<=sqrt(x);i++){
    if(c%i==0){
        int cnt=0;
        while(c%i==0){
            ++cnt;
            c/=i;
        }
        cout << i << "^" << cnt;
        if(c!=1)
        cout << " * ";
       }
    }
    if(c!=1)
    cout << c << "^1";
}

void sangnt(){
    for(int i=0;i<=1000000;i++)
        a[i]=1;
        a[0]=a[1]=0;
    for(int i=2;i<=1000;i++){
        if(a[i]){
            for(int j=i*i;j<=1000000;j+=i){
                a[j]=0;
            }
        }
    }    
}

int snt(int x){
    for(int i=2;i<=sqrt(x);i++){
        if(x%i==0)
        return 0;
    }
    return x>1;
}
int main(){
    sangnt();
   int n;
   cin >> n;
    /* if(snt(n))
    cout << "YES" << endl;
    else cout << "NO" << endl; */

    /* for(int i=l;i<=r;i++){
        if(a[i])
        cout << i << ' ';
    } */
    ptnt(n);

    system("pause");
}
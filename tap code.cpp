#include <iostream>
#include <math.h>
#include <string.h>
#include <ctype.h>
using namespace std;

//bài tập phân tích thừa số nguyên tố
//đếm các thừa số nguyên tố khác nhau

/* void phantich(int a){
    int cnt=0;
    for(int i=2; i<=sqrt(a); i++){
            if(a%i==0){
        while(a%i==0){
            a/=i;
           }
         cnt++;
        }
    }
    if(a!=1){
        cnt++;
    }
    cout << cnt << endl;
}
int main(){
    int n;
    cin >> n;
    while(n--){
        int x;
        cin >> x;
    phantich(x);
    }
    system("pause");
}  */
/* int check(int n){
    int k=0;
    for(int i=2;i<=sqrt(n);i++){
       int cnt=0;
        while(n%i==0){
            cnt++;

            n/=i;
        }
        if(cnt>=2){
            k= 1;
        }
        if(cnt==1){
            return 0;
        }
    }
    if(n!=1)
    return 0;
    return k;
}
int main(){
     int l,r;
     cin >> l >> r;
     for(int i=l;i<=r;i++){
        if(check(i)){
              cout << i << " ";
        }
     }

    system("pause");
} */
/* int uocle(long long x){
    for(int i=1;i<=x;i++){
        if(x%i==0){
            if(i%2!=0){
                return 1;
            }
        }
    }
    return 0;
}
// số có ước lẻ là số chính phương
int main(){
    int n,s=0;
    cin >> n;
    while(n--){
        long long c;
        cin >> c;
        if(uocle(c)){
            cout << "YES" <<endl;
        }else{
            cout << "NO" <<endl;
        }
    }
    system("pause");
} */

int main(){
    string n,y;
    getline(cin,n);
    getline(cin,y);
    int p[256]={0};
    for(int i=0;i<n.length();i++){
    p[n[i]]=1;
    }
    for(int i=0;i<y.length();i++){
       p[y[i]]=1;
    }
    for(int i=0;i<256;i++){
        if(p[i]){
            cout << (char)i;
        }
    }
cout << "\n";
system("pause");
}

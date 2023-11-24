/*bài 6: sinh hoán vị
bài 7: hoán vị ngược
bài 8: xâu nhị phân có k bit 1
*/
#include <bits/stdc++.h>
using namespace std;
int n,p[100],ok,k;
void kt(){
for(int i=1;i<=n;i++){
       p[i]=0;
    }
}
void sinh(){
    int i=n;
    while(i>=1 && p[i]==1){
        p[i]=0;
        --i;
    }
    if(i==0){
        ok=0;
    }else{
        p[i]=1;
    }
}
bool check(){
    int cnt=0;
    for(int i=1;i<=n;i++){
        cnt+=p[i];
    }
    return cnt==k;
}
int main(){
  /*   int n;
    cin >>n;
    int p[n];
     for(int i=0;i<n;i++){
        p[i]=n-i;
        cout << p[i];
    }
    cout << ' ';
    while(prev_permutation(p,p+n)){
        for(int i=0;i<n;i++){
            cout << p[i];
        }
        cout << ' ';
    } */
    cin >> n >> k;
    kt();
    ok=1;
    while(ok){
        if(check()){
            for(int i=1;i<=n;i++){
                cout << p[i];
            }
               cout << endl;
        }
        sinh();
    }
    system("pause");
}
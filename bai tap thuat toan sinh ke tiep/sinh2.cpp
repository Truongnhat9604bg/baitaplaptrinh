/*bài 4: xâu AB
Bài 5: sinh tổ hợp chập k của n;
*/
#include <iostream>
#include <vector>
using namespace std;
int p[100],n,ok,k;
void khoitao(){
    for(int i=1;i<=k;i++){
         p[i]=i;
    }
}
void sinh(){
    int i=k;
    while(i>=1 && p[i]==n-k+i){
        --i;
    }
    if(i==0){
        ok=0;
    }else{
        p[i]++;
        for(int j=i+1;j<=k;j++){
            p[j]=p[j-1]+1;
        }
    }
}
int main(){
  cin >> n >> k;
  ok=1;
    khoitao();
  while(ok){
    for(int i=1;i<=k;i++){
        cout << p[i];
    }
    cout << ' ';
    sinh();
  }
    system("pause");
}
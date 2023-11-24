/*Bài 1: cửa sổ lớn nhất
bài 2: số nhỏ hơn k
*/
#include <iostream>
using namespace std;
int main(){
   /*  int n,k;
    cin >> n >> k;
    int p[n];
    for(int &x : p){
        cin >> x;
    }
    int cnt=0;
    for(int i=0;i<k;i++){
        cnt+=p[i];
    }
    int m=cnt,idx=0;
    for(int i=k;i<n;i++){
         cnt=cnt-p[i-k]+p[i];
         if(cnt>m){
            m=cnt;
            idx=i-k+1;
         }
    }
    cout << m << endl;
    for(int i=idx;i<idx+k;i++){
         cout << p[i] << ' ';
    }
    cout << endl; */
    int n,k;
    cin >> n >> k;
    int p[n];
    int d=0;
    for(int &x : p){
        cin >> x;
        if(x<=k)
        ++d;
    }
    int cnt=0;
   for(int i=0;i<d;i++){
      if(p[i]<=k)
      ++cnt;
   }
   int m=cnt;
   for(int i=d;i<n;i++){
      if(p[i-d]<=k)
        --cnt;
        if(p[i]<=k)
        ++cnt;
        m=max(m,cnt);
   }
      cout << d-m << endl;
    system("pause");
}
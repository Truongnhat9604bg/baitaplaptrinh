/*bài 4: tìm cột có nhiều số fibonaxi nhất
*/
#include <iostream>
#include <set>
using namespace std;
set<long long> s;
void fibo(){
    long long a[93];
     a[0]=0,a[1]=1;
    for(int i=2;i<93;i++){
        a[i]=a[i-1]+a[i-2];
    }
    for(int i=0;i<93;i++){
        s.insert(a[i]);
    }
}
int main(){
    fibo();
    int n,m;
    cin >> n >> m;
    long long p[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) cin >> p[i][j];
    }
    int sl=0,cot;
    long long sum=0;
    for(int i=0;i<m;i++){
        int cnt=0;
        long long add=0;
        for(int j=0;j<n;j++){
               if(s.count(p[j][i])==1){
                   add+=p[j][i];
                   ++cnt;
               }
        }
        if(cnt>sl){
            sl=cnt;
            cot=i;
            sum=add;
        }else if(cnt==sl){
            if(add >sum){
                cot=i;
                sum=add;
            }
        }
    }
    cout << cot+1 << endl;
    for(int i=0;i<n;i++){
        if(s.count(p[i][cot])==1){
            cout << p[i][cot] << " ";
        }
    }
    system("pause");
}
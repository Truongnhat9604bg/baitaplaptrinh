/* bài 3: liệt kê các dòng có tổng lớn nhất trong ma trận

*/
#include <iostream>
using namespace std;
using ll =long long;
int main(){
    int n,m;
    cin >> n >> m;
    int p[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> p[i][j];
        }
    }
    ll mx=INT_MIN;
    for(int i=0;i<n;i++){
        ll cnt=0;
        for(int j=0;j<m;j++){
            cnt+=p[i][j];
        }
        if(cnt>=mx)
        mx = max(mx,cnt);
    }
    cout << mx << endl;
   for(int i=0;i<n;i++){
        ll cnt=0;
        for(int j=0;j<n;j++){
            cnt+=p[i][j];
        }
        if(cnt==mx)
          cout << i+1 << " ";
   }
    system("pause");
}
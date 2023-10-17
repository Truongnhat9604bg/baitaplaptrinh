/*liệt kê chỉ số I trong mảng mà tổng các pt có chỉ số nhỏ hơn I = tổng các pt có chỉ số lớn hơn I*/
#include <iostream>
using ll=long long;
using namespace std;

int main(){
    int n;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    ll cnt=0;
    for(int i =0;i<n;i++){
          cnt+=p[i];
    }
    ll sum=0;
    int ok=1;
    for(int i=0;i<n;i++){
        cnt-=p[i];
        if(cnt==sum){
        cout << i << " ";
        ok=0;
        }
        sum+=p[i];
    }
    if(ok)
    cout << -1 << " ";
    system("pause");
}
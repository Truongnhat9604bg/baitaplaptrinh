/*bài 17 Loại bỏ mèo
        nguồn: #8.2 c++ 28tech
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p[n];
    for(int &x : p){
        cin >> x;
    }
    int m=0,cnt=1;
    for(int i=1;i<n;i++){
        if(p[i-1]==p[i]){
           ++cnt;
        }else cnt=1;
        m=max(m,cnt);
    }
    cout << n-m << " ";
    system("pause");
}
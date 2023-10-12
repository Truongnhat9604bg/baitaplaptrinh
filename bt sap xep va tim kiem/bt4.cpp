/*Kiểm tra xem phần tử x có nằm trong mảng hay không,nếu có in 1 ngược lại in 0
       input: 5 3
              1 2 3 4 5
       output 1       
*/
#include <iostream>
#define ok system("pause")
using namespace std;
int main(){
    int n,x,cnt=0;
    cin >> n >> x;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    for(int i=0;i<n;i++){
        if(p[i]==x)
        cnt=1;
    }
    if(cnt)
    cout << cnt << endl;
    else cout << cnt << endl;
    ok;
}
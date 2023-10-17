/*Bài 20: số thao tác tối thiểu để mảng tăng dần
      nguồn: video #8.2 c++ 28tech

tư tưởng: khi gặp xét các phần tử mà pt đó nhỏ hơn pt đứng trước nó thì tăng đến khi bằng pt đứng trước
        in ra số lần tăng các pt đó 
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
    int cnt=0;
    for(int i=1;i<n;i++){
        if(p[i]<p[i-1]){
            cnt+=p[i-1]-p[i];
            p[i]=p[i-1];
        }
    }
    cout << cnt << endl;
    system("pause");
}
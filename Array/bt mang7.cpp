/*đếm các số x sao cho tất cả các phần tử trong mảng đều chia hết cho x
          liệt kê xem có bao nhiêu số x như vậy
*/

//có thể tìm ước chung lớn nhất của toàn bộ các pt trong mảng
#include <bits/stdc++.h>
using namespace std;
map<int,int> mp;
void dem(int n){

    //dùng map đếm tần suất ước của các phần tử trong mảng
    for(int i=1;i<sqrt(n);i++){
        if(n%i==0){
         mp[i]++;
         if(mp[n/i]!=n) mp[n/i]++;
        }
    }
}
int main(){
    int n;
    cin >> n;
    int p[n];
    for(int &x : p){
        cin >> x;
         dem(x);
    }
    int res=0;
    for(auto it : mp){
         if(it.second==n)
         res++;
    }
    cout << res << " ";
    system("pause");
}
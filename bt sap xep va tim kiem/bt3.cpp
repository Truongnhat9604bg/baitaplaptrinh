/*in ra các bước của thuật toán sắp xếp nổi bọt*/
#include <iostream>
using namespace std;
int main(){
   int n;
   cin >> n;
   int p[n];
   for(int i=0;i<n;i++){
    cin >> p[i];
   }
   for(int i=0;i<n-1;i++){
    int cnt=0;
      for(int j=0;j<n-i-1;j++){
           if(p[j]>p[j+1]){
           swap(p[j],p[j+1]);
           cnt=1;
           }
      }
      if(cnt){
      cout << "Buoc " << i+1 << ": ";
      for(int x : p){
        cout << x << " ";
            }
            cout << endl;
        }else break;
   }
    system("pause");
}
/*cho dãy a có n phần tử, các pt trong dãy đều xuất hiện với tần suất chẵn, chỉ duy nhất 1 số có tần suất 
      lẻ, hãy tìm số đó
*/
#include <iostream>
using namespace std;
int a[10001];
int main(){
  int n;
  cin >> n;
  int p[n];
  for(int &x : p){
    cin >> x;
    a[x]++;
  }
  for(int i=0;i<n;i++){
    if(a[p[i]]%2!=0){
    cout << p[i] << " ";
    a[p[i]]=2;
       }
    }
    system("pause");
}
#include <iostream>
using namespace std;

bool dem(int a){
   int cnt;
   for(int i=1;i<=a; i++){
      if(a%i==0){
         ++cnt;
      }
   }
   if(cnt==3){
      return 1;
   }
   return 0;
}


int main(){
   int n,t;
   cin >> t;
   while(t--){
      cin >> n;
      for(int i=1; i<=n; i++){
         if(dem(i)){
            cout << i << " ";
         }
      }
      cout << "\n";
   }
    system("pause");
}
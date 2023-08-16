#include <iostream>
#include <math.h>
using namespace std;
int p[1000001];
void checknt(){
   for(int i=0;i<=1000000;i++){
   p[i]=1;
   p[1]=p[0]=0;
   }
   for(int i=2;i<=1000;i++){
      if(p[i]){
         for(int j=i*i;j<=1000000;j+=i){
            p[j]=0;
         }
      }
   }
}
int main(){
   int n;
   cin >> n;
   checknt();
   while(n--){
      long long a,t;
      cin >> a >> t;
      int x=0;
      for(int i=sqrt(a);i<=sqrt(t);i++){
         if(p[i] && (float)i*i>=a){
       ++x;
         }
      }
      cout << x << " ";
      cout << "\n";
   }
   system("pause");
}
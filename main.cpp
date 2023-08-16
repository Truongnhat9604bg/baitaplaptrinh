#include <iostream>
#include <math.h>
using namespace std;

 bool kiemtra(int n){
   int s=0;
     for(int i=1; i<n;i++){
         if(n%i==0){
             s+=i;
         }
     }
     if(s==n)
         return 1;
     return 0;
   
 }
 int main(){
     int a,b;
     cin >> a >> b;
     if(a<b){
     for(int i=a; i<=b;i++){
        if(kiemtra(i)){
            cout << i << " ";
         }
     }
 }else{
    for(int i=a;i>=b;i--){
         if(kiemtra(i)){
             cout << i << " ";
         }
     }
    
 }       
     system("pause");
}


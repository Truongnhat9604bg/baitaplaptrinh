/*in ra bước đầu tiên trong phân hoạch lomuto của thuật toán quicksort 
         input 8
               8 7 2 1 5 3 6 4
         output 2 1 3 [4] 5 8 6 7
         //trong đó phần tử chốt dc đánh dấu bằng ngoặc vuông
*/
#include <iostream>
#define ok system("pause")
using namespace std;
void phanhoach(int a[],int l,int r){
    int pivot =a[r];
    int i=l-1;
    for(int j=0;j<r;j++){
        if(a[j]<pivot){
            ++i;
        swap(a[j],a[i]);
        }
    }
    ++i;
    swap(a[r],a[i]);
    for(int j=0;j<=r;j++){
        if(pivot==a[j])
        cout << "[" << a[j] << "]" << " ";
       else cout << a[j] << " "; 
    }
}

int main(){
   int n;
   cin >> n;
   int p[n];
   for(int i=0;i<n;i++){
     cin >> p[i];
   }
   int l=0,r=n-1;
   phanhoach(p,l,r);
   ok;
}
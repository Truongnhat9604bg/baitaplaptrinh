/*Đề bài: cho 1 dãy gồm n số nguyên,hãy đưa ra dãy các thao tác đổi chỗ để nhận được dãy không giảm
                  input: 5
                         5 4 3 2 1
                  output: 1 5
                          2 4      
*/
#include <iostream>
using namespace std;

//thuật toán quicksort với phân hoạch hoare
void doi(int a[],int l,int r){
    int pivot=a[r];
    int i=l,j=r;
    while(i<=j){
           while(a[i]<pivot) ++i;
           while(a[j]>pivot) --j;
        if(i<=j){
      swap(a[i],a[j]); 
          if(i!=j) 

          //in ra các thao tác đổi chỗ 
          cout << i+1 << " " << j+1 <<endl;
          ++i;
          --j;
        }
    }
    if(j>l) doi(a,l,j);
    if(i<r) doi(a,i,r);
}
int main(){
  int n;
  cin >> n;
  int p[n];
  for(int &x : p){
    cin >> x;
  }
  doi(p,0,n-1);
      system("pause");
}
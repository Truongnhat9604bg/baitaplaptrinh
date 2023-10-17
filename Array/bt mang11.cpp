/*Bài 18 dãy con liên tục có độ dài nhỏ nhất với tổng lớn hơn x
     nguồn: video #8.2 c++ 28tech

     * SỬ DỤNG KỸ THUẬT 2 CON TRỎ L,R
*/
#include <iostream>
using namespace std;
int main(){
    int n,x;
    cin >> n >> x;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
   int sum=0,l=0;
   int m=INT_MAX;
   for(int r=0;r<n;r++){
       sum+=p[r];
      while(sum>x){
        m=min(m,r-l+1);
        sum-=p[l];
        ++l;
      }
   }
   if(m==INT_MAX)
   cout << "-1" << endl;
   else cout << m << endl;
    system("pause");
}
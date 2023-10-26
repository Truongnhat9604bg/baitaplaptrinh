/*bài 36: sắp xếp chẵn lẻ
bài 37: biểu thức lớn nhất
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    /* int n;
    cin >> n;
    int p[n];
    vector<int> c;
    vector<int> l;
    for(int i=0;i<n;i++){
        cin >> p[i];
        if(p[i]%2==0)
          c.push_back(p[i]);
          else l.push_back(p[i]);
    }
    sort(c.begin(),c.end());
    sort(l.begin(),l.end(),greater<int>());
    int i=0,j=0;
    for(int t=0;t<n;t++){
        if(p[t]%2==0){
            cout << c[i] << " ";
            i++;
        }else{
            cout << l[j] << ' ';
            j++;
        }
    } */

   int n,k;
   cin >> n >> k;
   int p[n];
   for(int &x : p){
    cin>> x;
   }
   sort(p+1,p+n,greater<int>());
     int cnt=p[0];
   for(int i=1;i<n;i++){
    if(k>0)
       cnt+=p[i];
       else cnt-=p[i];
       k--;
   }
   cout << cnt << endl;
    system("pause");
}
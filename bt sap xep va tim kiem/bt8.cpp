/*trộn 2 dãy đã sắp xếp thành 1 dãy đã săp xếp, dòng đầu nhập vào số lượng phần tử 2 mảng b,c
       input 4 4
             1 2 4 6
             3 5 8 9
        output b1 b2 c1 b3 c2 b4 c3 c4
*/
#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int b[n],c[m];
    for(int i=0;i<n;i++){
        cin >> b[i];
    }
    for(int i=0;i<m;i++){
        cin >> c[i];
    }
    int i=0,j=0;
    while(i<n && j<m){
        if(b[i]<=c[j]){
            cout << "b" << i+1 << " ";
            ++i;
        }else{
            cout << "c" << j+1 << " ";
            ++j;
        }
    }
    while(i<n){
        cout << "b" << i+1 << " ";
        ++i;
    }
    while(j<m){
        cout << "c" << j+1 << " ";
        ++j;
    }
    system("pause");
}
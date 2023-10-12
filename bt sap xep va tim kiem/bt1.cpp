/*Đề bài: in ra các bước của thuật toán sắp xếp đổi chỗ trực tiếp
      input 4
            5 7 3 2
*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    //tạo biến đếm số bước
    int j=0;
    while(j<n-1){
        for(int i=j+1;i<n;i++){
            if(p[j]>p[i])
            swap(p[j],p[i]);
        }
        ++j;
        cout << "Buoc" <<" "<< j << ": "; 

        //in ra các bước thực hiện của thuật toán sắp xếp
    for(int x : p){
        cout << x << " ";
    }
        cout << endl;
    }
    system("pause");
}
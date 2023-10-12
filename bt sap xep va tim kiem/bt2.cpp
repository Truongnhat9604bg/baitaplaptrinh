/*in ra các bước của thuật toán sắp xếp chọn*/
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
             if(p[min]>p[j]){
                min=j;
             }
        }
        swap(p[i],p[min]);
        cout << "Buoc" << " "<< i+1 << ": ";
        for(int x : p){
            cout << x << " ";
        }
        cout << endl;
    }
    system("pause");
}
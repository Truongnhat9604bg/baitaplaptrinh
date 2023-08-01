#include <iostream>
using  namespace std;

int main(){
    
    int tong,hieu,tich,du,a,b;
    float thuong;
    cout << "nhap a,b"<< endl;
    cin >> a >> b;
    tong=a + b;
    hieu=  a-b;
    tich= a*b;
    thuong= (float)a/b;
    du= a%b;
    cout << tong << " " << hieu << " " << tich << " " << thuong << " " << du << endl;
    system("pause");
}
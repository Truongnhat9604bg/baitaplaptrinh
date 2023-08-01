#include <iostream>
using  namespace std;

int main(){
    
    int tong,hieu,tich,a,b;
    float thuong;
    cout << "nhap a,b"<< endl;
    cin >> a >> b;
    tong=a + b;
    hieu=  a-b;
    tich= a*b;
    thuong= a%b;
    cout << tong << " " << hieu << " " << tich << " " << thuong << endl;
    system("pause");
}
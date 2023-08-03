#include <iostream>
#include <math.h>
using namespace std;
int main(){
    int a;
    double s,v,d;
    cout << "nhap vao canh a: ";
    cin >> a;

    s= 4*pow(a,2);
    v= pow(a,3);
    d= a*sqrt(3);
    cout << "dien tich xung quanh = " << s << endl;
    cout << "the tich = " << v << endl;
    cout << "duong cheo = " << d << endl;
    system("pause");
   return 0; 

}
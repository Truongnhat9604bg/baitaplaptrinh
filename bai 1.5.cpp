#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int x1,x2,y1,y2;
    cout << "nhap toa do cua A,B: ";
    cin >> x1 >> x2 >> y1 >> y2;

    double kc = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    cout << "khoang cach giua 2 diem A va B = " << kc << endl;
    system("pause");
}
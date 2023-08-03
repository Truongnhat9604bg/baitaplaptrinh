#include <iostream>
#include <math.h>
using  namespace std;

int main(){
    /*
   int a,b;
    cout << "nhap vao 2 canh goc vuong a,b: ";
    cin >> a >> b;

    double R,c,s,x;
    c= sqrt(pow(a,2) + pow(b,2));
    R = c/2;
    s= 0.5*a*b;
    x= a+b+c;
    cout << "do dai canh huyen= " << c << endl;
    cout << "chu vi tam giac=  " << x << endl;
    cout << "dien tich tam giac= " << s << endl;
    cout << "ban kinh duong tron noi tiep= " << R << endl;
    */

    int a,b,c;
    cout << "nhap vao 3 canh a,b,c: ";
    cin >> a >> b >> c;

    double x,s,r,p;
    x= a+b+c;
    p= x/2;
    s= sqrt(p*(p-a)*(p-b)*(p-c));
    r= (a*b*c)/(4*s);
    cout << "chu vi tam giac= " << x << endl;
    cout << "dien tich tam giac= " << s << endl;
    cout << "ban kinh r cua duong tron ngoai tiep= " << r <<endl;
    

    system("pause");
}

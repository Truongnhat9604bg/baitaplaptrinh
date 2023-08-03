#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
/*
int main(){
    int x1,x2,y1,y2;
    cout << "nhap toa do cua A,B: ";
    cin >> x1 >> x2 >> y1 >> y2;

    double kc = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    cout << fixed << setprecision(2) << "khoang cach giua 2 diem A va B = " << kc << endl;
    */
   int main(){
/*
   int c;
   cout << "nhap vao do c";
   cin >> c;

   double F= (c*1.8)+32;
   cout << fixed << setprecision(2) << F << endl;
   */
/*
     float s,n;
     cin >> n;

     s= 1-(1/(n+1));
     cout << fixed << setprecision(2) << s << endl;
     */


int t,n;
cin >> t >> n;


if(n<=0 || t<1 || t>12){
    cout << "INVALID" << endl;
}else{
    if((n%400==0 || (n%4==0 && n%100!=0)) && t==2){
    cout << 29 << endl;
   }else  if(t==2){
    cout << 28 << endl;
   }else if(t==1 ||  t==3 || t==5 || t==7 || t==8 || t==10 || t==12){
    cout << 31 << endl;
   }else if(t==4 || t==6 || t==9 ||  t==11){
    cout << 30 <<  endl;
   }
}

    system("pause");
   }

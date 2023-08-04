#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main(){
    /*
    int x1,x2,y1,y2;
    cout << "nhap toa do cua A,B: ";
    cin >> x1 >> x2 >> y1 >> y2;

    double kc = sqrt(pow((x1-x2),2) + pow((y1-y2),2));
    cout << fixed << setprecision(2) << "khoang cach giua 2 diem A va B = " << kc << endl;
    */
   
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

/*
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
*/
/*
    char n;
    cin >> n;

    if(n>=97 && n<122){
           n+=1;
           cout <<  n << endl;
    }else if(n>=65 && n<90){
           n+=33;
           cout << n << endl;
    }else if(n==90){
           n+=7;
           cout << n << endl;
    }else if(n==122){
           n-=25;
            cout << n << endl;
    }else{
        cout << "INVALID";
    }
   */

/*
int a,b,c,max,min;
cin >> a >> b >> c;
if(a>b && a>c){
    max=a;
}else if(b>a && b>c){
    max=b;
}else{
    max=c;
}
if(a<b && a<c){
    min=a;
}else if(b<a && b<c){
    min=b;
}else{
    min=c;
}
cout << max << " " << min << endl;
*/

/*
int a,b,c;
cin >> a >> b >> c;
if(a>b+c || b>a+c || c>a+b){
   cout << "INVALID\n";
}else{
if(a==b && b==c && c==a && a>0 && b>0 && c>0){
    cout << 1 << endl;
}else if(a==b || b==c || c==a){
      cout << 2 << endl;
}else if(sqrt(pow(a,2)+pow(b,2))==c || sqrt(pow(c,2)-pow(b,2))==a){
    cout << 3 << endl;
}else if(sqrt(pow(a,2)+pow(b,2))==c || sqrt(pow(c,2)-pow(b,2))==a && (a==b || b==c || c==a)){
    cout << 4 << endl;
}else{
    cout << 5 << endl;
}
}
*/

/*
int n,ngay,tuan,nam;
cin >> n;
nam = n/365;
int du= n%365;
tuan = du/7;
ngay= tuan%7;
cout << nam << " " << tuan <<  " " << ngay << endl; 
*/

int a,b,c;
cout << "nhap phuong trinh ax^2+bx+c=0:  ";
cin >> a >> b >> c;

double delta= pow(b,2) - 4*a*c;
if(delta >0){
    double x1= (-b+sqrt(delta))/(2*a);
    double x2= (-b-sqrt(delta))/(2*a);
    cout << fixed << setprecision(2) << x1 << " " << x2 << endl;
}else if(delta==0){
    cout << "INF\n";
}else{
    cout << "NO\n";
}
    system("pause");
   }

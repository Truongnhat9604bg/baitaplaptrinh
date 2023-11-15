/* a+b mod m =(a mod m  +  b mod m) mod m
   a-b mod m =(a mod m  -  b mod m) mod m
   a*b mod m =((a mod m) * (b mod m)) mod m
   a^b mod m (a mod m)^b mod m

   //XÂY DỰNG THUẬT TOÁN EUCLID MỞ RỘNG
*/
#include <iostream>
using namespace std;

int x,y,d;
//d là ước chung lớn nhất

void euclid(int a,int b){
    //điều kiện dừng
    if(b==0){
        x=1;
        y=0;
        d=a;
    }else{
        euclid(b,a%b);
        int tmp=x;
        x=y;
      y=tmp-(a/b)*y;
    }
}
int main(){
     int n,m;
     cin >> n >> m;
     euclid(n,m);
    cout << d << ' ';
    system("pause");
}
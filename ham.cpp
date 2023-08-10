#include <iostream>
#include <math.h>
using namespace std;

//xay dung ham kiem tra so nguyen to
bool checksnt(int a,int b){
    for(int i=2; i<=sqrt(a) || i<=sqrt(b);i++){
        if (a%i==0 || b%i==0)
        {
            return 0;
        }  
    }
    return a>1 || b>1;
}

//kiem tra tat ca chu so trong 1 so co la snt ko
bool kiemtra(int &n,int &m){
    while (n!=0 || m!=0)
    {   int s=n%10,t=m%10;
        n/=10,m/=10;
        if(checksnt(s,t)){
        return 1;
        }
    
    }
    return 1;
}
//kiem tra tong cua chu so do co phai so nguyen to khong?
bool tong(int &n,int &m){
  int s,t;
  s=0,t=0;
  while (n!=0 || m!=0)
  {   int du=n%10,du1=m%10;
  n/=10,m/=10;
    s+=du,t+=du1;
    if(checksnt(s,t)){
        return 1;
    }
    
  }
  return 1;
}

int main(){
    int n,m;
    cin >> n >> m;
if (n==(checksnt(n,m) && tong(n,m) && kiemtra(n,m)) && m==(checksnt(n,m) && tong(n,m) && kiemtra(n,m)))
{
    cout << 2 << endl;
}else if(n==(checksnt(n,m) && tong(n,m) && kiemtra(n,m)) || m==(checksnt(n,m) && tong(n,m) && kiemtra(n,m))){
    cout << 1 << endl;
}else{
    cout << 0 << endl;
}

    system("pause");
}
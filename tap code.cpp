#include <iostream>
#include <math.h>
using namespace std;

//bài tập phân tích thừa số nguyên tố

void phantich(int a){
    cout << a << " = ";
    for(int i=2; i<=sqrt(a); i++){
            if(a%i==0){
                int cnt=0;
        while(a%i==0){
            a/=i;
            ++cnt;
           }
           cout << i << "^"<< cnt << " ";
           if(a!=1){
            cout << "*";
           }
        }
    }
    if(a!=1){
        cout << a << "^1" << endl;
    }
}
int main(){
    int n;
    cin >> n;
    phantich(n);
    system("pause");
}
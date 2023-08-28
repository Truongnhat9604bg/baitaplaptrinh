#include <iostream>
#include <math.h>
#include <string.h>
#include <ctype.h>
using namespace std;

int main(){
    string n,y;
    getline(cin,n);
    getline(cin,y);
    int p[256]={0};
    for(int i=0;i<n.length();i++){
    p[n[i]]=1;
    }
    for(int i=0;i<y.length();i++){
       p[y[i]]=1;
    }
    for(int i=0;i<256;i++){
        if(p[i]){
            cout << (char)i;
        }
    }
cout << "\n";
system("pause");
}

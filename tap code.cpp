#include <bits/stdc++.h>
using namespace std;

// đếm số ký tự khác nhau trong chuỗi
/* int main(){
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
} */

// tần suất của các phần tử trong mảng
int main(){
    int n;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    //dùng 2 vòng lặp duyệt các phần tử,so sánh các phần tử
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=0;j<i;j++){
            if(p[j]==p[i]){
                cnt=0;
                break;
            }
        }
          if(cnt)
          cout << p[i] << " ";    
    }
   system("pause");
}

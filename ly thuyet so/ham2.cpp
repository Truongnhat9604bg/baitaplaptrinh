//bài tập liệt kê các số thuận nghịch trong đoạn và số thuận nghịch đó phải có ít nhất 3 ước nguyên tố
//note(số thuận nghịch là số khi đọc ngược lại vẫn bằng chính nó)
#include <iostream>
#include <cmath>
using namespace std;

//hàm kiểm tra số thuận nghịch
int check(int x){
     int ok=x;
     int cnt=0;
     while(x){
        int du=x%10;
         cnt= cnt*10 +du;
         x/=10;
     }
     if(cnt==ok)
     return 1;
     return 0;
}

int uocnt(int t){
        int ch=2,cnt=0;
        int tmp=0;
        while(t!=1){
            if(t%ch==0){
                if(tmp!=ch){
                    ++cnt;
                    tmp=ch;
                }
               t/=ch;
            }
            else{
                ch++;
            }
        }
        if(cnt>=3)
        return 1;
        return 0;
}
//hàm phân tích thừa số nguyên tố
int ptnt(int s){
     int cnt=0; //biến đếm các thừa số nguyên tố
     for(int i=2;i<=sqrt(s);i++){
        int tmp=0;  //biến đếm tần suất của các thừa số nguyên tố
        while(s%i==0){
            tmp++;
            s/=i;
        }
        if(tmp!=0)
        ++cnt;
     }
        if(s!=1)
        cnt++;
  return cnt>=3;
}

int main(){
      int l,r,tmp=1;
     cin >> l >> r;
for(int i=l;i<=r;i++){
    if(check(i) && ptnt(i)){
        cout << i << " ";
        tmp=0;
    }
}
if(tmp)
cout << "-1" << endl;
    system("pause");
}
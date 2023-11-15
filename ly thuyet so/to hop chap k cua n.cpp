//áp dụng vào bài toán chia kẹo của euler

#include <iostream>
using namespace std;
const int mod= (int) 1e9+7;
int c[1000][1000];
void tohop(){
    for(int i=0;i<1000;i++){
        for(int j=0;j<=i;j++){
            if(i==j || j==0){
                c[i][j]=1;
            }else{
                c[i][j]= c[i-1][j] + c[i-1][j-1];
                c[i][j]%=mod; 
            }
        }
    }
}
int main(){
    tohop();
    int n,k;
    cin >> n >> k;
    cout << c[n][k] << endl;
    system("pause");
}
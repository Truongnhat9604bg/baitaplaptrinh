/*Bài 17: đếm số lượng xâu con có k ký tự khác nhau
*/
#include <iostream>
using namespace std;

void bailam(){
    string s;
    int k;
    cin >> s >> k;
    int cnt=0;
    for(int i=0;i<s.length();i++){
        int tmp[256]={0};
        int dem=0;
        for(int j=i;j<s.length();j++){
            if(tmp[s[j]]==0){
                dem++;
            }
            if(dem==k)
              cnt++;
              if(dem>k)
                break;
              tmp[s[j]]=1;
        }
    }
    cout << cnt << endl;
}
int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);
   int tc;
   cin >> tc;
   while(tc--){
      bailam();
   }
    system("pause");
}
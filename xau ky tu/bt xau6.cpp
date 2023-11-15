/*Bài 10: đếm số lượng câu khác nhau
Bài 11: số đẹp
*/
#include <iostream>
#include <set>
using namespace std;
int main(){
/*     int n;
    cin >> n;
    cin.ignore();
    set<string> se;
    while(n--){
       string s;
       getline(cin,s);
       se.insert(s);
    }
    cout << se.size() << endl; */

    int tc;
    cin >> tc;
    while(tc--){
        string s;
        cin >> s;
        int cnt=1;
        int l=0,r=s.length()-1;
        while(l<=r){
           if(s[l]!=s[r]){
              cnt=0;
              break;
           }
           if((s[l]=='1' || s[l]=='3' || s[l]==5 || s[l]=='7' || s[l]=='9') && (s[l]=='1' || s[l]=='3' || s[l]=='5' || s[l]=='7' || s[l]=='9')){
            cnt=0;
            break;
           }
           ++l;
           --r;
        }
        if(cnt){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    system("pause");
}
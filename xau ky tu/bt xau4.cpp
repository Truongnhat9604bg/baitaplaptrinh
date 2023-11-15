/*Bài 5: xâu pangram1,2 (là xâu có đầy đủ 26 chữ cái trong bảng chữ cái)
bài 7: đếm xâu con có ký tự đầu và cuối giống nhau (1 ký tự trong chuỗi cũng là 1 xâu con)
bài 8: liệt kê các ký tự không lặp trong xâu
*/
#include <iostream>
#include <set>
#include <map>
using namespace std;
int main(){
 /*    string s;
    int k;
    cin >> s;
    cin >> k; 
   set<char> se;
 for(int i=0;i<s.size();i++){
     se.insert(s[i]);
 }
   if(26-se.size()<=k)
   cout << 1 << endl;
   else cout << 0 << endl; */

   /* string s;
   cin >> s;
   map<char,int> mp;
   int cnt=s.size();
   for(int i=0;i<s.size();i++){
      mp[s[i]]++;
   }
    for(auto it : mp){
        cnt+=(it.second*(it.second-1)/2);
    }
   cout << cnt << endl; */

   string n;
   cin >> n;
   map<char,int> m;
   for(int i=0;i<n.length();i++){
      m[n[i]]++;
   }
   for(int i=0;i<n.length();i++){
    if(m[n[i]]==1){
      cout << n[i];
      }
   }
    cout << endl;
    system("pause");
}
/*Bài 1: xóa từ trong xâu
 Bài 2,3: tạo email
 Bài 4: chuẩn hóa tên 1,2
 Bài 6: đếm từ trong xâu (stringstream)
*/
#include <bits/stdc++.h>
using namespace std;
int main(){
  /*   string s,x;
    getline(cin,s);
    getline(cin,x);
    stringstream ss(s);
    vector<string> v;
    string word;
    while(ss>>word){
        v.push_back(word);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]!=x)
        cout << v[i] << ' ';
        
    } */

    /* int tc;
    cin >> tc;
    cin.ignore();
    map<string,int> m;
    while(tc--){
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
        if(s[i]>=65 && s[i]<=90)
        s[i]+=32;
    }
    vector<string> v;
    stringstream ss(s);
    string w;
    while(ss >> w){
      v.push_back(w);
    }
      string word="";
     word+=w;
    for(int i=0;i<v.size()-1;i++){
     word+=v[i][0];
    }
     if(m[word]==0){
        cout << word << "@gmail.com" << endl;
     }else{
            cout << word << m[word]+1 << "@gmail.com" << endl;
       }
       m[word]++;
    } */

    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++){
     s[i]= tolower(s[i]);
    }
    vector<string> v;
    stringstream ss(s);
    string w;
    while(ss >> w){
      v.push_back(w);
    }
    for(int i=0;i<v.size();i++){
       v[i][0]= toupper(v[i][0]);
       /*  if(v[i]==v.back()){
            for(int j=0;j<w.length();j++){
               w[j]= toupper(w[j]);
            }
        } */
    }
     cout << v.back() << ", ";
    for(int i=0;i<v.size()-1;i++){
        cout << v[i] << ' ';
    }
    system("pause");
}
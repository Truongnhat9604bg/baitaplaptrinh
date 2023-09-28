#include <iostream>
#include <set>
using namespace std;
int cnt[1000001]={0};
int main(){
   int n;
   cin >> n;
   int p[n];
   set<int> s;
   for(int i=0;i<n;i++){
        int x;
        cin >> x;
        s.insert(x);
   }
   int i=0;
    for(auto it=s.begin();it!=s.end();++it){
        if(*it%2==0){
          p[i]=*it;
          ++i;
        }
    }
     for(auto it=s.begin();it!=s.end();++it){
        if(*it%2!=0){
          p[i]=*it;
          ++i;
        }
    }
    for(int i=0;i<n;i++){
        cout << p[i] << " ";
    }
    system("pause");
}
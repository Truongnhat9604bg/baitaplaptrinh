/*Bài 3: sửa đèn
*/
#include <iostream>
#include <set>
using namespace std;
int main(){
    int n,k,b;
    cin >> n >> k >> b;
    set<int> s;
    while(b--){
        int x;
        cin >> x;
        s.insert(x);
    }
    int cnt=0;
    for(int i=1;i<=k;i++){
        if(s.find(i) != s.end())
        ++cnt;
    }
    int m=cnt;
    for(int i=k+1;i<=n;i++){
           if(s.find(i-k)!= s.end())
            --cnt;
            if(s.find(i)!= s.end())
            ++cnt;
            m=min(m,cnt);
    }
    cout << m << endl;
    system("pause");
}
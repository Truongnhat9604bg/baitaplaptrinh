#include <iostream>
using namespace std;
int t[100001]={0};
int main(){
    int n;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    for(int i=0;i<n;i++){ 
      t[p[i]]++;
    }
    for(int i=0;i<n;i++){
        if(t[p[i]]==1){
         cout << p[i] << " ";
        }
    }
    system("pause");
}
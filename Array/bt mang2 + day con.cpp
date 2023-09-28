/*
int p[100001];
void sang(){
    for(int i=0;i<=100000;i++)
    p[i]=i;
    for(int i=2;i<=sqrt(100000);i++){
        if(p[i]){
            for(int j=i*i;j<=100000;j+=i){
                if(p[j]==j){
                    p[j]=i;
                }
            }
        }
    }
}
void pt(int a){
    while(a!=1){
    int c=0,t=p[a];
    while(a%t==0){
        c++;
        a/=t;
    }
    cout << t << "(" << c << ")" << " ";
    }
}
void pt2(int a){
    while(a!=1){
        cout << p[a] << " ";
        a/=p[a];
    }

}
int main(){
    sang();
    int n;
    cin >>n;
   for(int i=1;i<=n;i++){
      int x;
      cin >> x;
      cout << "#TC" << i << ":";
      pt2(x);
      cout << "\n";
   }
} 
*/
/* #include <iostream>
using namespace std;
int ucln(int a,int b){
    while(b!=0){
        int r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main(){
    int n,cnt=0;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    int max=-1e9-1;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int t=p[i]*p[j];
           if(t>max)
           max=t;
        }
    }
    cout << max << endl;
    system("pause");
} */

// liệt kê các dãy con tăng dài nhất 
#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int p[n];
    for(int i=0;i<n;i++){
        cin >> p[i];
    }
    int cnt=1,tmp=0,max=0,t[n]; // mảng t dùng để lưu các dãy con
    for(int i=1;i<n;i++){
        if(p[i]>p[i-1])
         cnt++;
         else cnt=1;
        if(cnt>max){
            max=cnt;
            t[0]=i-max+1;
            tmp=1;
        }else if(cnt==max){
            t[tmp]=i-max+1;
            tmp++; //tăng số lượng dãy con
        }
    }
      cout << max << endl;
    for(int i=0;i<tmp;i++){
        for(int j=0;j<max;j++){
            cout << p[t[i]+j] << " ";
        }
        cout << endl;
    }
    system("pause");
}



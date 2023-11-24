//áp dụng thuật toán bfs tìm đường đi ngắn nhất
#include <bits/stdc++.h>
using namespace std;

int n,m;
int p[105][105],d[105][105],check[105][105];
int dx[3]={-1,0,1},dy[3]={1,1,1};

void timduong(int a,int b){
      queue<pair<int,int>> q;
      q.push({a,b});
      while(!q.empty()){
          pair<int,int> top=q.front();
          q.pop();
          int i=top.first;
          int j=top.second;
         // cout << "(" << i << ":" << j << ")" << ' ';
         for(int k=0;k<3;k++){
            int i1= i + dx[k];
            int j1= j + dy[k];
            if(i1>=1 && i1<=n && j1>=1 && j1<=m){
                 d[i1][j1]=max(d[i1][j1], d[i][j] + p[i1][j1]);
                if(check[i1][j1]){
                    check[i1][j1]=0;
                    q.push({i1,j1});
                }
            }
         }
      }
}

int main(){
    cin >> n >> m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin >> p[i][j];
            if(j==1){
                d[i][j]=p[i][j];
            }else{
                d[i][j]=-1e9;
            }
        }
    }
    for(int i=1;i<=n;i++){
        timduong(i,1);
       // cout << endl;
        memset(check,1,sizeof(check));
    }
    int kq=-1e9;
    for(int i=1;i<=n;i++){
        kq=max(kq,d[i][m]);
    }
    cout << kq << endl;
    system("pause");
}
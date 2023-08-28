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



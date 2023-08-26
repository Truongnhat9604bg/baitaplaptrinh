// #include <bits/stdc++.h>
// using namespace std;
/* int doixung(string c){
   int sai=0;
   int l=0,r=c.length()-1;
      while(l<r){
         if(c[l]!=c[r])
         sai++;
         ++l;
         --r;
   }
   if(c.length()%2!=0 && sai<=1){
      return 1;
   }else if(c.length()%2==0 && sai==1){
   return 1;
   }
   return 0;
}
int main(){
 string s;
 cin >> s;
 if(doixung(s)){
   cout << "YES" << endl;
 }else{
   cout << "NO" << endl;
 }
   system("pause");
} */
/* int inhoa(char t[]){
   for(int i=0;i<strlen(t);i++){
     if(!isupper(t[i]))
     return 0;
   }
   return 1;
}
int main(){
char n[1000];
gets(n);
    char *x=strtok(n," ");
   while(x!=NULL){
      if(inhoa(x))
         cout << x << endl;
          x=strtok(NULL," ");
      
   }
   
   system("pause");
} */
#include <iostream>
#include <string>
using namespace std;

// bài toán gửi thư
/* 
int main(){
   int n;
   cin >> n;
   int p[n];
   for(int i=0;i<n;i++){
      cin >> p[i];
   }
   int min=p[1]-p[0],max=p[n-1]-p[0];
   cout << min << " " << max << endl;
   for(int i=1;i<n-1;i++){
      int a=p[i]-p[i-1],b=p[i+1]-p[i];
      min= (a<b) ? a : b;
      int c=p[n-1]-p[i],d=p[i]-p[0];
      max=(c>d) ? c : d;
      cout << min << " " << max << endl;
   }
   min=p[n-1]-p[n-2],max=p[n-1]-p[0];
   cout << min << " " << max << endl;
 
system("pause");
} */
bool check(int x[],int t){
     int c25=0,c50=0;
     for(int i=0;i<t;i++){
         if(x[i]==25)
         c25++;
         else if(x[i]==50){
            if(c25==0)
            return 0;
            c25--;
            c50++;
         }else{
            if(c25==0 || c25*25+c50*50<75)
            return 0;
            if(c50!=0){
            c50--;
            c25--;
            }
         else{
            c25-=3;
         }
      }
  }  
     return 1;
}
int main(){
   int n;
   cin >> n;
   int p[n];
   for(int i=0;i<n;i++){
      cin >> p[i];
   }
   if(check(p,n)){
      cout << "YES" <<endl;
   }else{
      cout << "NO" <<endl;
   }
   system("pause");
}
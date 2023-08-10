#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main(){
    /*
    int s,n,i=1;
    cin >> n;
    while (i<=n)
    { s+=i;
    ++i;
    }
    cout << s << endl;
 */

/*
int n,s=0;
cin >> n;
for (int i = 1; i<=n; i++){
    if(i%3==0){
        s+=i;
    }
}
cout << s << endl;
*/
/*
int n;
cin >> n;
int s=0;

for(int i = 1; i <= n; i++)
{
    s+=pow(i,3);
}
cout << s << endl;
*/
/*
int n;
int s=1;
cin >> n;

for(int i=1;i<=n;i++){
    s*=i;
}
cout << s << endl;
*/
/*
int x,y;
cin >> x >> y;
     
  int n=pow(x,y);
  if(x>=0 && y>=0){
    cout << n << endl;
  } 
  */
 /*
 int n,s=0;
 int  i;
 cin >> n;
 for( i = 1; i < n; i++)
 {  s+= (n%10);
    n /=10;
    
 }
 cout << s << endl;
  */

 int n,s;
 int chan=0; 
 int le=0;
 cin >> n;
 while (n!=0)
 {
    s=n%10;
    n/=10;
    if(s%2==0){
       chan++;
    }else{
        le++;
    }  
   
 }

  if (le==chan){
    cout << "YES\n";
 }else  if(le!=chan){
    cout << "NO\n";
 } 
 
    system("pause");
}
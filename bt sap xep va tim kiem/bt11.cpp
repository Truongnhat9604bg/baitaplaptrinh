/*bài 23: đếm các cặp số có tổng bằng k
                                 nhỏ hơn k
                                 lớn hơn k
*/
#include <iostream>
#include <map>
#include <algorithm>
using namespace std;
int last(int a[],int l,int r,int x){
     int no =-1;
     while(l<=r){
        int m=(l+r)/2;
        if(a[m]<x){
            no=m;
            l=m+1;
        }else r=m-1;
     }
     return no;
}
int last1(int a[],int l,int r,int x){
    int res=-1;
    while(l<=r){
        int m=(l+r)/2;
        if(a[m]>x){
            res=m;
            r=m-1;
        }else l=m+1;
    }
    return res;
}
/* int main()
{
    int n,k;
    cin >> n >> k;
    int p[n];
    map<int,int> m;
    for(int &x : p){
        cin >> x;
        m[x]++;
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=m[k-p[i]];
        if(p[i]*2==k)
        cnt--;
    }
    cout << cnt/2 << " ";
    system("pause");
    return 0;
} */
//số lượng cặp có tổng bé hơn k
int main()
{
    int n,k;
    cin >> n >> k;
    int p[n];
    for(int &x : p){
        cin >> x;
    }

    int cnt=0;
    sort(p,p+n);
    auto it =upper_bound(p,p+n,k-p[0]);
    for(int i=it-p;i<n;i++){
        cnt+=i;
    }
    cout << cnt << endl;
    system("pause");
    return 0;
}


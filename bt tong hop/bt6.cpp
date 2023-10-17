/*bài 20: ca sĩ lê ro
      nguồn: video #20 c++ 28tech

      tip: nếu thời gian kết thúc của buổi diễn thứ i ít hơn thời gian bắt đầu của buổi diễn thứ i+1.
           tức là ca sĩ có thể tham gia cả 2 buổi lưu diễn đó
*/
#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int,int> a,pair<int,int> b){
    //sắp xếp tăng dần của thời gian kết thúc buổi lưu diễn
    return a.second < b.second;
}
int main(){
    int n;
    cin >> n;

//sử dụng vector để lưu các pair tượng trưng cho các cặp mốc thời gian bắt đầu và kết thúc của chuyến lưu diễn
    vector<pair<int,int>> v(n);
    for(int i=0;i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    int tem=v[0].second,cnt=1;
    for(int i=1;i<n;i++){
        if(v[i].first>tem){
             ++cnt;
             tem=v[i].second;
        }
    }
      cout << cnt << " ";
  system("pause");
}
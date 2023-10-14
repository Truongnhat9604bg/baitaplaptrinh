/*bài 15: xếp gạch
    nguồn: video #20 c++ 28tech
*/
#include <iostream>
#include <algorithm>
int main(){
    int n;
    std::cin >> n;
     int p[n];
     for(int &x : p){
        std::cin >> x;
     }
   std:: sort(p,p+n,std::greater<int>());
      int gach=p[0]; //xếp viên gạch có độ cứng lớn nhất trước
      int cnt=1; //xếp viên gạch đầu tiên, chiều cao dc tính là 1 

      //bắt đầu xếp các viên gạch tiếp theo
      for(int i=1;i<n;i++){
        if(gach>=1){
            cnt++;
            //tăng thêm chiều cao khi xếp gạch và giảm độ cứng của viên gạch đó đi 1
            //lấy ra độ cứng của viên gạch đó và tiếp tục xét
            gach=std::min(gach-1,p[i]);
          }
      }
      std::cout << cnt << " ";
     system("pause");
}

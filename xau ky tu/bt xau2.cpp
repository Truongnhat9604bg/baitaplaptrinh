#include <iostream>
#include <string>
using namespace std;
string thay(string s, string x, string y) {
size_t pos = s.find(x);
while (pos != string::npos) {
s.replace(pos, x.length(), y);
pos = s.find(x, pos + y.length());
}
return s;
}
int main() {
string s, x, y;
getline(cin, s);
getline(cin, x);
getline(cin, y);
cout << thay(s, x, y) << endl;
return 0;
}
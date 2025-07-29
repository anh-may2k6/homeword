#include <iostream>
#include <string>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int l = 0;
    string s;
    cin >> s;
    size_t pos_1 = s.find('A'); // tìm kiếm và chọn A ở bên trái 
    int start = (pos_1 != string::npos) ? static_cast<int> (pos_1) : -1; // ép kiểu int
    size_t pos_2 = s.rfind('Z'); // tìm kiếm và chọn Z ở bên phải
    int end = (pos_2 != string::npos) ? static_cast <int> (pos_2) : -1;
    l = end - start +1; // tính độ dài dài nhất có thể
    cout << l << endl;
    return 0;
}

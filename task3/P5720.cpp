#include <iostream>
using namespace std;

int main(){
    int a = 0;
    cout << "请输入一个正整数a，表示木棍长度：" <<endl;
    cin >> a;
    int day = 1;
    for( ; a >1; day ++){
        a /= 2;
    }
    cout << day <<endl;
       
    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    cout << "请输入两个以空格为分隔的不超过10^9正整数，分别表示每人分到的数量和同学的人数" <<endl;
    cin >> a >> b;
    cout << a * b <<endl;


    system("pause");


    return 0;
}
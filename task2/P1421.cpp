#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    cout << "请输入两个以空格为分隔的不超过10^9正整数，分别表示a和b" <<endl;
    cin >> a >> b;
    int money = a*10 + b;
    int price = 19;
    cout << money / price <<endl;


    system("pause");


    return 0;
}
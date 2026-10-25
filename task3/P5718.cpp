#include<iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "请输入一个正整数n表示数字个数：" <<endl;
    cin >> n;
    int min_value = 100000000;
    int a = 0;
    cout << "请输入n个非正整数，用空格隔开：" <<endl;
    int x;
    for (int i = 0; i < n; i++){
        cin >> x;
        if((x < min_value))
        min_value = x;
    }
    cout << min_value <<endl;
    



    system("pause");

    return 0;
}
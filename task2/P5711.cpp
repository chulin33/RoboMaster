#include<iostream>
using namespace std;

int main(){
    int n =0;
    cout << "请输入一个正整数，表示年份" <<endl;
    cin >> n;
    bool year  = ( n % 4 == 0 && n % 100 != 0) || ( n % 400 ==0 );
    cout << year <<endl;

    system("pause");


    return 0;
}
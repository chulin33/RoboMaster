#include <iostream>
using namespace std;

int main(){
    int n = 0;
    cout << "请输入一个正整数n：" <<endl;
    cin >> n;
    int a = 1;
    for(int i = 0; i <= n;i++){
        for(int j = 0 ; j < (n - i) ; j++){
            printf ( "%02d",a);
            a ++;


        }
        cout <<endl;
    }


    return 0;
}
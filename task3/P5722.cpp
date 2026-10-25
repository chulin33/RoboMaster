#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout << "请输入一个正整数n:" <<endl;
    cin >>n;
    int sum = 0;
    for( int i = 0; i<=n; i++){
        sum += i;
    }
    cout << sum <<endl;

  
    return 0;
}
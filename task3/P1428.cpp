#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout << "请输入一个正整数n "<<endl;
    cin >> n;
    int a = 0;
    cout << "请输入n个非负整数，用空格间隔" <<endl;
    int fish[n];
    for(int i = 0; i<n ; i++){
        cin >> a;
        fish [i] = a;
        int sum = 0;
        for(int j = 0; j < i ; j++){
            if( fish[j] < fish[i]){
                sum ++;
            }
        }
        cout << sum << " " ;
    }

    return 0;
}
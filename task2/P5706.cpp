#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    double t = 0;
    int n = 0;
    cout << "输入一个实数t和一个正整数n，使用空格隔开" <<endl;
    cin >> t >> n;
    cout << fixed << setprecision(3) << t / n <<endl;
    cout << 2*n <<endl;


    system("pause");


    return 0;
}
#include<iostream>
using namespace std;

int main(){
    double m = 0;
    double h = 0;
    cout << "请输入两个浮点数吗m,h，分别表示体重（kg)，身高（m)，用空格隔开" <<endl;
    cin >> m >> h;
    double BMI = m/(h*h);
    if(BMI < 18.5){
        cout << "Underweight" <<endl;
    }
    else if( 18.5 <= BMI && BMI < 24){
        cout << "Normal" <<endl;
    }
    else{
        cout << BMI << "\nOverweight" <<endl;
    }

    system("pause");


    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int A = 0;
    int B = 0;
    int C = 0;
    cout << "请输入三个非负整数，分别表示牛牛的作业成绩、小测成绩和期末考试成绩。相邻两个数之间用一个空格隔开，三项成绩满分都是 100 分。" <<endl;
    cin >> A >> B >> C;
    cout << A*0.2 + B*0.3 + C*0.5 <<endl;


    system("pause");


    return 0;
}
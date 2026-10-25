#include<iostream>
using namespace std;

int main(){
    int n = 0;
    int k = 0;
    int sum_A = 0;
    int num_A = 0;
    int sum_B = 0;
    int num_B = 0;
    cout << "请输入两个正整数n与k：" <<endl;
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        if(i % k == 0){
            sum_A += i;
            num_A ++;

        }
        else{
            sum_B += i;
            num_B ++;
        }
    
    }
    double average_A = (double)sum_A / num_A;
    double average_B = (double)sum_B / num_B;
    printf("%.1f %.1f\n", average_A ,average_B);


    system("pause");
    return 0;
}
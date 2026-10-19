#include<iostream>
using namespace std;

int main(){
    int x = 0;
    cout << "请输入一个整数x(0<=x<=1000)" <<endl;
    cin >> x;
    bool xiao_A = ( x %2 ==0 ) && ( 4 < x && x <= 12 );
    bool Uim = ( x %2 ==0 ) || (  4 < x && x <= 12  );
    bool xiao_B = ( x %2 ==0 && ! ( 4 < x && x <= 12 ) ) || ( x %2 !=0 &&  ( 4 < x && x <= 12 ) );
    bool zheng_mei = ( x %2 !=0 ) && !( 4 < x <= 12 );
    cout << xiao_A <<" "<< Uim << " " << xiao_B << " " <<  zheng_mei <<endl;

   
    system("pause");


    return 0;
}
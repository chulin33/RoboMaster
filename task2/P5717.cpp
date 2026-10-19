#include<iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "请输入3个正整数a，b,c" <<endl;
    cin >> a >> b >> c;
    if(a>b) swap (a,b);
    if(a>c) swap (a,c);
    if(b>c) swap (b,c);
    if(a+b<=c){
        cout << "Not triangle" <<endl;
        return 0;
    }
    if(a+b>c){
        if(a*a+b*b==c*c){
            cout << "Right triangle" <<endl;
        }
        else if(a*a+b*b>c*c){
            cout << "Acute triangle"  <<endl;
        }
        else if(a*a+b*b<c*c){
            cout << "Obtuse triangle" <<endl;
        }
    }
    if(a==b || a==c || b==c){
        cout << "Isosceles triangle" <<endl;
    }
    if(a==b && b==c){
        cout << "Equilateral triangle" <<endl;
    }
    

    system("pause");


    return 0;
}
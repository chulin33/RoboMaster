#include<iostream>
using namespace std;

int main(){
    int y = 0;
    int m = 0;
    cout << "输入两个正整数，分别表示年份y和月数m，以空格隔开" <<endl;
    cin >> y >> m ;
    bool year  = ( y % 4 == 0 && y % 100 != 0) || ( y % 400 ==0 );
    switch (m){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout << 31 <<endl;
        break;

        case 4:
        case 6:
        case 9:
        case 11:
        cout << 30 <<endl;
        break;

        case 2:
        if(year){
            cout << 29 <<endl;
        }
        else{
            cout << 28 << endl;
        }
        break;

    }
    


  

    system("pause");


    return 0;
}
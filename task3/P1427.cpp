#include <iostream>
using namespace std;

int main(){
    int a = 0;
    cout << "请输入一串整数，以0结束" <<endl;
    int arr[333];
    int num = 0;
    while(cin >> a){
        if(a==0){
            break;
        }
        arr[num] = a;
        num ++;
    }
    int start = 0;
    int end = num - 1;
    while(start<end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
    for(int i = 0; i<num; i++){
        cout << arr[i] <<" ";
    }
    cout <<endl;


    return 0;
}
#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout << "请输入一个正整数n" <<endl;
    cin >> n;
    int arr[333];
    int num = 0;
    arr[0] = n;
    while(n>1){
        if( n%2==0 ){
          num ++;  
          n /= 2;
          arr[num] = n;

        }
        else{
            n = n*3 +1;
            num ++;
            arr[num] = n;
        }
    }
    int start = 0;
    int end = num;
    while( start<end ){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start ++;
        end --;
    }
    for(int i = 0; i<=num; i++){
        cout << arr[i] <<" ";
    }

    return 0;
}
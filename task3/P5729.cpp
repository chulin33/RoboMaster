#include <iostream>
using namespace std;

bool arr[25][25][25];

int main(){
    int w=0;
    int x=0;
    int h=0;
    cout << "请输入三个正整数" <<endl;
    cin >> w >> x >> h;
    
    for(int p=1; p<=w; p++){
        for(int y=1; y<=x; y++){
            for(int z=1; z<=h; z++){
                arr[p][y][z]= true;
            }
        }
    }
    int q = 0;
    cout << "请输入一个正整数q" <<endl;
    cin >>q;
    for(int i=0; i<q; i++){
        int x1=0;
        int y1=0;
        int z1=0;
        int x2=0;
        int y2=0;
        int z2=0;
        cout << "请输入6个整数" <<endl;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for(int a=x1; a<=x2; a++){
            for(int b=y1; b<=y2; b++){
                for(int c=z1; c<=z2; c++){
                    arr[a][b][c] = false;
                }
            }
        }
        
    }
    int num_true = 0;
    for(int d=1; d<=w; d++){
        for(int e=1; e<=x; e++){
            for(int f=1; f<=h; f++){
                if(arr[d][e][f] == true){
                    num_true ++;
                }
            }
        }
    }
    cout << num_true <<endl;
    return 0;
}
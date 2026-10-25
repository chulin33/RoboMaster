#include <iostream>
using namespace std;
int main(){
    int l = 0;
    int m = 0;
    cout << "请输入两个非负整数，分别表示马路的长度l和区域的数目m" <<endl;
    cin >> l >> m;
    int num = l +1;
    bool tree[num];
    for(int i = 0; i <= num; i++){
        tree[i] = true;
    }
    for(int j = 0; j<m; j++){
        int u = 0;
        int v = 0;
        cout << "请输入两个整数u,v，分别表示第" << j+1 <<"个区域的起始点和终止点" <<endl;
        cin >> u >> v;
        for(int k = u ; k<=v; k++){
            tree[k] = false;
        }

    }
    int num_true = 0;
    for(int h = 0; h<num; h++){
        num_true += tree[h];
    }
    cout << num_true <<endl;

    return 0;
}
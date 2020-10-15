#include <bits/stdc++.h>
using namespace std;

int N;
//すでにここで要素を決定
int A[210];

int main(){
    cin >> N;
    for (int i =0 ; i < N; i++) cin >> A[i];

    int res = 0;

    while(true) {
        bool exist_odd = false;

        for (int i = 0; i < N; i++){
            if(A[i] % 2 != 0) exist_odd = true;
        }

        if (exist_odd) break;

        //操作を行えるなら実際に行う
        for(int i = 0; i < N; i++){
            A[i] /= 2;
        }

        res++;
    }

    cout << res << endl;
}
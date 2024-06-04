#include<iostream>

using namespace std;

int main() {
    //ポインタと配列
    //ポインタを使って、配列の要素をアクセスする
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    cout << "一番目の要素は：　" << arr[0] << endl;

    //ポインタでアクセス
    int *p = arr;//arrは配列のアドレス
    cout << "ポインタで一番目のをアクセス：　" << *p << endl;
    p++;//ポインタに後ろに4or8バイトを移動させる
    cout << "ポインタで2番目のをアクセス：　" << *p << endl;

    cout << "ポインタで配列を走査" << endl;
    int * p2 = arr;
    for (int i = 0; i < 10; i++) {
        cout << *p2 << endl;
        p2++;
    }

    return 0;

}

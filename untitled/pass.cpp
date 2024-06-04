#include<iostream>
using namespace std;
//二つの数字を交換するのを実現
void swap01 (int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "swap01 a = " << a << endl;
    cout << "swap01 b = " << b << endl;
}

void swap02(int * p1, int * p2) {
    int temp = * p1;
    *p1 = *p2;
    *p2 = temp;
}

int main() {
    //ポインタと関数
    //値をパス
    //実引数が書き換えされなず、仮引数のみ変換される
    int a = 10;
    int b = 20;
//    swap01(a, b);

    //アドレスをパス
    //アドレスパスであれば、実引数を修正することができる
    swap02(&a, &b);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;

}
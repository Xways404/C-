#include<iostream>

using namespace std;

int main() {
    //const定数ポインタ

    //constがポインタを修飾 定数ポインタ
    int a = 10;
    int b = 10;

    const int * p = &a;
    //ポインタが指し示す値を書き換えることができないけど、指す場所を変更することができる
//    *p = 20;//不可
    p = &b;//ok

    //constが定数を修飾 ポインタ定数
    //ポインタ自身を書き換えることができなくるけど、指す値が変更することができる
    int * const p2 = &a;
    *p2 = 100;//ok
//    p2 = &b;//no

    //constがポインタと定数両方を修飾
    //指しと値両方変更不可
    const int * const p3 = &a;
//    *p3 = 100;
//    p3 = &b;

    return 0;
}

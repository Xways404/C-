#include <iostream>
#include <ctime>
using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // 乱数のシードを設定
    //ランダム数字を形成
    int num = rand() % 100 + 1; //rand() % 100 + 1 は　0 + 1 ~ 99 + 1の間からランダム数字を形成
//    cout << num << endl;
    cout << "1から100までの数字を当ててみ" << endl;

    //プレイヤーが当ててみる
    int val = 0;

    while(1) {
        cin >> val;

        //当てた数字を判断
        if (val > num) { //当たらなかったら、大きかったか小さかったかを告知
            cout << "大きかった" << endl;
        } else if (val < num) {
            cout << "小さかった" << endl;
        } else {
            //当たったら退出
            cout << "おめでとう・・・・" << endl;
            break;
        }
    }



    return 0;
}

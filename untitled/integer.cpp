#include <iostream>

using namespace std;

int main() {

    short num1 = 10;

    int num2 = 10;

    long num3 = 10;

    long long num4 = 10;

    cout << "num1 = " << num1 << endl;
    cout << "num2 = " << num2 << endl;
    cout << "num3 = " << num3 << endl;
    cout << "num4 = " << num4 << endl;

    cout << "short = " << sizeof(short) << endl;
    cout << "int = " << sizeof(int) << endl;
    cout << "long = " << sizeof(long) << endl;
    cout << "long long = " << sizeof(long long) << endl;

    float f1 = 3.14f;//fをつけないとdouble型と思われる
    cout << "f1 = " << f1 << endl;

    double d1 = 3.1415926;
    cout << "d1 = " << d1 << endl;

    cout << "float = " << sizeof(float) << endl;
    cout << "double = " << sizeof(double) << endl;

    float f2 = 3e2;
    cout << "f2 = " << f2 << endl;
    float f3 = 3e-2;
    cout << "f3 = " << f3 << endl;

    char ch = 'a';
    cout << "char = " << sizeof(char) << endl;
    cout << "char = " << (int) ch << endl;//int型にキャスト　基底では94として保存

    cout << "aaaa\thelloworld" << endl; //\tは8charを占めてる
    cout << "aaaaaa\thelloworld" << endl;
    cout << "aaaaaaa\thelloworld" << endl;

    char str[] = "hello world c style";
    cout << str << endl;

    string str2 = "hello world c++ style";
    cout << str2 << endl;

    bool flag = false;
    cout << flag << endl;//1 true, 0 false

//    float f = 3.14f;
//    cout << "fに割り当てを：　" << endl;
//    cin >> f;
//    cout << f << endl;

    int a1 = 3;
    int b1 = 10;
    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;//割り算をする際に、割もんが0でじゃいかん
    cout << 10 % 6 << endl;
    cout << 3 % 4 << endl;//割れない時、自分の値を戻す

    //前置後置インクリメント
    int a = 10;
//    ++a;
    a++;
    cout << a << endl;
    //前置後置デクリメント
    int b = 10;
    --b;
    b--;
    cout << b << endl;

    cout << (a == b) << endl;
    cout << (a || b) << endl;

//    int score = 0;
//    cout << "スコアを入力して" << endl;
//    cin >> score;

    //多岐条件
//    if (score > 600) {
//        cout << "合格" << endl;
//    } else if (score < 600 && score > 500) {
//        cout << "ギリ合格" << endl;
//    } else {
//        cout << "不合格" << endl;
//    }

    int pig_a = 100;
    int pig_b = 200;
    int pig_c = 300;

    if (pig_a > pig_b) {
        if (pig_a > pig_c) {
            cout << pig_a << endl;
        }
    } else if (pig_b > pig_c) {
        if (pig_b > pig_c) {
            cout << pig_b << endl;
        }
    } else {
        cout << pig_c << endl;
    }

    int i1 = 10;
    int i2 = 20;
    int i3 = 0;
    i3 = i1 > i2 ? i1 : i2;//i1がi2より大きいければ、i1の値を戻す、そうでなければ、i2を戻す
    cout << "i3 = " << i3 << endl;

//    cout << "この映画を評価して：　" << endl;
//    int score = 0;
//    cin >> score;
//    cout << "評価点数は：　" << score << endl;
//    switch (score) {
//        case 10:
//            cout << "クラシックな映画" << endl;
//            break;
//        case 3:
//            cout << "ゴミ映画" << endl;
//            break;
//        default:
//            cout << "くそ映画" << endl;
//            break;
//    }
    int i01 = 0;

    while (i01 < 10) {
        cout << "こりゃ　" << i01 << endl;
        i01++;
    }


    return 0;
}

#include <iostream>
#include <string>
using namespace std;

// 「car」という名前の構造体を宣言します
struct car {
    string brand;
    string model;
    int year;
};

int main() {
    // 車の構造を作成し、myCar1 に保存します。
    car myCar1;
    myCar1.brand = "BMW";
    myCar1.model = "X5";
    myCar1.year = 1999;

    // 別の車の構造を作成し、myCar2 に保存します。
    car myCar2;
    myCar2.brand = "Ford";
    myCar2.model = "Mustang";
    myCar2.year = 1969;

    // 構造体のメンバーを出力する
    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";

    return 0;
}
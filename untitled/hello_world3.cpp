#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0))); // 乱数のシードを設定
    int secretNumber = rand() % 100 + 1; // 1から100までの乱数を生成
    int tries = 0;
    int guess;
　　　

    cout << "1から100までの数字を当ててください！" << endl;

    do {
        cout << "あなたの予想を入力してください: ";
        cin >> guess;
        tries++;

        if (guess > secretNumber) {
            cout << "もっと小さい数字です！" << endl;
        } else if (guess < secretNumber) {
            cout << "もっと大きい数字です！" << endl;
        } else {
            cout << "おめでとうございます！" << endl;
            cout << "正解は " << secretNumber << " でした！" << endl;
            cout << "試行回数: " << tries << endl;
        }
    } while (guess != secretNumber);

    return 0;
}

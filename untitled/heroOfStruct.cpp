#include<iostream>
#include<string>

using namespace std;
//ヒーローの構造体生成
struct Hero {
    string name;
    int age;
    string sex;
};

void bubbleSort(struct Hero heroArray[], int len) {
    for (int i = 0; i < len - 1; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            //jインデックスの年齢の値がj+1より大きければ、交換させる
            if (heroArray[j].age > heroArray[j + 1].age) {
                struct Hero temp = heroArray[j];
                heroArray[j] = heroArray[j + 1];
                heroArray[j + 1] = temp;
            }
        }
    }
}
void printHero(struct Hero heroArray[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "名前: " << heroArray[i].name << " 年齢: " << heroArray[i].age << " 性別: " << heroArray[i].sex << endl;
    }
}

int main() {

    //ヒーロー５名を格納する配列を作成
    struct Hero heroArray[5] = {
            {"劉備", 23, "男"},
            {"関羽", 22, "男"},
            {"張飛", 20, "男"},
            {"趙雲", 21, "男"},
            {"貂蝉", 19, "女"}
    };
    int len = sizeof(heroArray) / sizeof(heroArray[0]);
    //テスティング
//    for (int i = 0; i < len; i++) {
//        cout << "名前: " << heroArray[i].name << " 年齢: " << heroArray[i].age << " 性別: " << heroArray[i].sex << endl;
//    }

    //配列をソートする、年齢の降順で
    bubbleSort(heroArray, len);

    printHero(heroArray, len);
    

    //print out
    return 0;
}

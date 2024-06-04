#include<iostream>
#include<string>
#include <ctime>

using namespace std;

struct Student {
    string sName;
    int score;
};

struct Teacher {
    string tName;
    struct Student sArray[5];
};

//
void allocateSpace(struct Teacher tArray[], int len) {
    string nameSeed = "ABCDE";
    //教師に割り当てを
    for (int i = 0; i < len; i++) {
        tArray[i].tName = "Teacher_";
        tArray[i].tName += nameSeed[i];
        //学生に割り当てを
        for (int j = 0; j < 5; j++) {
            tArray[i].sArray[j].sName = "Student_";
            tArray[i].sArray[j].sName += nameSeed[j];
            int random = rand() % 61 + 40;//40-100
            tArray[i].sArray[j].score = random;
        }
    }
}

void printInfo(struct Teacher tArray[], int len) {
    for (int i = 0; i < len; i++) {
        cout << "教師名: " << tArray[i].tName << endl;

        for (int j = 0; j < 5; j++) {
            cout << "\t学生名: " << tArray[i].sArray[j].sName <<
                 " テスト点: " << tArray[i].sArray[j].score << endl;
        }
    }
}

int main() {
    //システムの時間によりランダム数値を生成
    srand((unsigned  int)time(NULL));

    //教師配列を作成
    struct Teacher tArray[3];

    //関数に通じて教師にデータを割り当て、教師が連れてる学生もデータも割り当て
    int len = sizeof(tArray) / sizeof(tArray[0]);
    allocateSpace(tArray, len);

    //printout
    printInfo(tArray, len);

    return 0;
}

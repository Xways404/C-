#include<iostream>
using namespace std;
#include<string>

struct student{
    string name;
    int age;
    int score;
};
struct teacher{
    int id;
    string name;
    int age;
    struct student stu;
};

//void printStudent1(teacher t) {
//    cout <<
//}

int main() {
    teacher t;
    t.id = 10000;
    t.name = "jack";
    t.age = 50;
    t.stu.name = "jim";
    t.stu.age = 20;
    t.stu.score = 60;

    cout << "先生の名前：　" << t.name << " 先生のid: " << t.id << " 先生の年齢: "
    << t.age << " 学生名: " << t.stu.name << " 学生年齢: " << t.stu.age << " 学生成績: " << t.stu.score << endl;

    return 0;
}

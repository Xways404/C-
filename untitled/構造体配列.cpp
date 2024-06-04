#include<iostream>

using namespace std;

#include<string>

struct Student {
    string name;
    int age;
    int score;
};

int main() {
//    struct Student stuArray[8] = {
//            {"tom",   18, 100},
//            {"jack",  28, 99},
//            {"marry", 38, 66}
//    };
//    //構造体の配列に要素を割り当て
//    stuArray[2].name = "king";
//    stuArray[2].age = 80;
//    stuArray[2].score = 60;
//
//    for(int i = 0; i < 3; i++) {
//        cout << "Name: " << stuArray[i].name << " Age: " << stuArray[i].age << " Score: " << stuArray[i].score << endl;
//    }
    Student s  = {"sun", 18, 100};
    Student * p = &s;
    cout << "Name: " << p->name << " Age: " << p->age << " Score: " << p->score << endl;
    return 0;
}

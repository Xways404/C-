#include<iostream>
#include<string>
using namespace std;

//カスタムデータ型は、いくつかの型で形成された型である
//struct 構造名{ メンバーリスト }
struct Student {
    //メンバーリスト

    //名前
    string name;
    //年齢
    int age;
    //点数
    int score;
}s3;
//学生の型に通じて、具体的な学生を作成する
//struct Student s1
//struct Student s2 = { ... }
//構造体を定義する際に構造体の変数の作成する

int main() {
    struct Student s1;
    s1.name = "tom";
    s1.age = 19;
    s1.score = 100;
    cout << "名前: "<< s1.name << " 年齢: " << s1.age << " 点数: " << s1.score << endl;

    struct Student s2 = {"jack", 21, 99};
    cout << "名前: "<< s2.name << " 年齢: " << s2.age << " 点数: " << s2.score << endl;

    s3.name = "marry";
    s3.age = 20;
    s3.score = 77;
    cout << "名前: "<< s3.name << " 年齢: " << s3.age << " 点数: " << s3.score << endl;

    return 0;
}

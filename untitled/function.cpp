#include<iostream>

using namespace std;

void test01() {
    cout << "this is test01" << endl;
}

void test02(int a) {
    cout << "this is test02 a = " << a << endl;
}

int test03() {
    cout << "this is test03" << endl;
    return 1000;
}
int test04(int a){
    cout << "this is test04" << a << endl;
    return a;
}


int main() {

    test01();

    test02(100);

    int num1 = test03();
    cout << num1 << endl;

    int num02 = test04(10000);
    cout << num02 << endl;

    return 0;
}

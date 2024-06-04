#include<iostream>

using namespace std;

//struct s1{
//
//};
int main() {
    {
        auto_ptr<int> pl(new int(10));
        cout << *pl << endl;

        auto_ptr<string> languages[5] = {
                auto_ptr<string>(new string("C")),
                auto_ptr<string>(new string("Java")),
                auto_ptr<string>(new string("C++")),
                auto_ptr<string>(new string("Python")),
                auto_ptr<string>(new string("Rust")),
        };
    }
    for(int i = 0;i<2; ++i) {
        cout << *[i]
    }


    return 0;
}
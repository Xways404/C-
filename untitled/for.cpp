#include <iostream>

using namespace std;

int main() {
//    for (int i = 1; i <= 100; i++) {
//        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
//            cout << "ノック" << endl;
//        } else {
//            cout << i << endl;
//        }
//    }
//    for (int i = 0; i < 10; ++i) {
//        for (int j = 0; j < 10; j++) {
//            cout << "* ";
//        }
//        cout << endl;
//    }
//    for (int i = 1; i <= 9; ++i) {
//       cout << i << endl;
//        for (int j = 1; j <= i; ++j) {
//            cout << j << "*" << i << "=" << j*i << " ";
//        }
//        cout << endl;
//    }

//    int arr[5];
//    arr[0] = 10;
//    arr[1] = 20;
//    arr[2] = 30;
//    arr[3] = 40;
//    arr[4] = 50;
//
//    cout << arr[0] << endl;

//    int arr2[5] = {10, 20, 30, 40, 50};
//    for (int i = 0; i < 5; i++) {
//        cout << arr2[i] << endl;
//    }

//    int arr[5] = {300, 350, 200, 400, 250};
//    int max = 0;
//    for (int i = 0; i < 5; i++) {
//        cout << arr[i] << endl
//        if (arr[i] > max) {
//            max = arr[i];
//        }
//    }
//    cout << max << endl;

//    int arr[5] = {1, 3, 2, 5, 4};
//    int start = 0;
//    int end = sizeof(arr) / sizeof(arr[0]) - 1;
//    while(start < end) {
//        int temp = arr[start];
//        arr[start] = arr[end];
//        arr[end] = temp;
//
//        start++;
//        end--;
//    }
//    for (int i = 0; i < 5; i++) {
//        cout << arr[i] << endl;
//    }
//    int arr[] = {4, 1, 8, 0, 5, 7, 1, 3, 9};
//    for (int i = 0; i < 9; i++) {
//        cout << arr[i] << " ";
//    }
//
//    for (int i = 0; i < 9 - 1; i++) {
//        for (int j = 0; j < 9 - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//    cout << " " << endl;
//    for (int i = 0; i < 9; i++) {
//        cout << arr[i] << " ";
//    }
//    int arr[2][3] = {1, 2, 3, 4, 5, 6};
//    cout << sizeof(arr) << endl;
//
//    for (int i = 0; i < 2; i++) {
//        for (int j = 0; j < 3; j++) {
//            cout << arr[i][j];
//        }
//    }
    int scores[3][3] = {
            {100, 100, 100},
            {90, 50, 100},
            {60, 70, 80}
    };
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += scores[i][j];
        }
        cout << sum << endl;
    }

    return 0;
}

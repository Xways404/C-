#include<iostream>

using namespace std;

//バブルソート関数 引数１　配列のアドレス、引数２　配列の長さ
void bubbleSort(int *arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        for(int j = 0; j < len - i -1; j++){
            //もしj > j+1の値であれば、値を交換する
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j +1];
                arr[j + 1] = temp;
            }
        }
    }
}
void printArray(int * arr, int len) {
    for(int i = 0; i < len; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    //配列作成
    int arr[10] = {4, 3, 6, 9, 1, 2, 10, 8, 7, 5};
    //配列の長さ
    int len = sizeof(arr) / sizeof(arr[0]);
    //関数作成して、バブルソートを実現
    bubbleSort(arr, len);
    //ソートした後の配列をプリントアウト
    printArray(arr, len);


    return 0;
}


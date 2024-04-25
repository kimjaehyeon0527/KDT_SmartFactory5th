#include <iostream>
#define SIZE2 5
using namespace std;

void reverse(int arr[], int size) {
   
    for (int i = 0; i < size / 2; i++) {
        // 배열의 첫 번째 값부터 마지막 값까지 교환

        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

void reversePointer(int arr2[], int &size2) {
    for (int i = size2; i >= 0; i--) {
        int* temp = arr2[i]llll
    }


int main() {
    int arr[5] = { 1, 2, 3 ,4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "원래 배열 : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    // 배열을 역순으로 뒤집기
    reverse(arr, size);

    cout << "역순 배열 : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }


    // 포인터를 이용한 역순 배열

    int arr2[5] = { 10, 20, 30, 40, 50 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]); // 5

    int n = 10;
    int* p = &arr2[5];
    
    cout << *p;
    //reversePointer(arr2, size2);


   
     

   


    return 0;
}

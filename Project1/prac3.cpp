#include <iostream>
#define SIZE2 5
using namespace std;

void reverse(int arr[], int size) {
   
    for (int i = 0; i < size / 2; i++) {
        // �迭�� ù ��° ������ ������ ������ ��ȯ

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

    cout << "���� �迭 : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }

    // �迭�� �������� ������
    reverse(arr, size);

    cout << "���� �迭 : " << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << endl;
    }


    // �����͸� �̿��� ���� �迭

    int arr2[5] = { 10, 20, 30, 40, 50 };
    int size2 = sizeof(arr2) / sizeof(arr2[0]); // 5

    int n = 10;
    int* p = &arr2[5];
    
    cout << *p;
    //reversePointer(arr2, size2);


   
     

   


    return 0;
}

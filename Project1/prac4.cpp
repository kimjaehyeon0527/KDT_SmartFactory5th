#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "몇명의 학생의 성적을 확인 하실 것인지 입력하세요." << endl;

	cin >> num;

	int* arr = new int[num];

	for (int i = 0; i < num; i++) {
		cout << i+1 << "번 학생의 성적을 입력하세요 : ";
		cin >> arr[i];
	}


	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += arr[i];
	}

	double average = (double)sum / (double)num;

	cout << "성적 평균 : " << average << endl;

	delete[] arr;
}
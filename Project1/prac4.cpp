#include <iostream>

using namespace std;

int main() {
	int num;
	cout << "����� �л��� ������ Ȯ�� �Ͻ� ������ �Է��ϼ���." << endl;

	cin >> num;

	int* arr = new int[num];

	for (int i = 0; i < num; i++) {
		cout << i+1 << "�� �л��� ������ �Է��ϼ��� : ";
		cin >> arr[i];
	}


	int sum = 0;
	for (int i = 0; i < num; i++) {
		sum += arr[i];
	}

	double average = (double)sum / (double)num;

	cout << "���� ��� : " << average << endl;

	delete[] arr;
}
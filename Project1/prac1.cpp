#include <iostream>

using namespace std;

void main(){
	string city[] = { "�Ϻ�", "�ѱ�", "�߱�", "����", "�̱�" };
	int arraySize = sizeof(city) / sizeof(city[0]);
	int count = 0;
	string a;

	cout << "���� �Է����ּ��� : ";
	cin >> a;

	if (a == "list") {
		for (string s : city) {
			cout << s << endl;
		}
	}
	
	else {
		for (int i = 0; i < arraySize; i++) {
			if (a == city[i]) {
				cout << "�ε��� �� : " << i << "," << endl << "���� �� :" << city[i] << endl;
				break;
			}
			count++;
		}
		if (count >= arraySize) {
			cout << "Error Message" << endl;
		}
	}
}	

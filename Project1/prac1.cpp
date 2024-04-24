#include <iostream>

using namespace std;

void main(){
	string city[] = { "일본", "한국", "중국", "독일", "미국" };
	int arraySize = sizeof(city) / sizeof(city[0]);
	int count = 0;
	string a;

	cout << "나라를 입력해주세요 : ";
	cin >> a;

	if (a == "list") {
		for (string s : city) {
			cout << s << endl;
		}
	}
	
	else {
		for (int i = 0; i < arraySize; i++) {
			if (a == city[i]) {
				cout << "인덱스 값 : " << i << "," << endl << "나라 명 :" << city[i] << endl;
				break;
			}
			count++;
		}
		if (count >= arraySize) {
			cout << "Error Message" << endl;
		}
	}
}	

#include <iostream>

using namespace std;

// 포인터

// 메모리의 주소를 가진 변수
// 포인터 변수는 * 을 이용하여 선언

int main() {

	int n = 10;
	int *p = &n;
	cout << "p : " << p << endl;
	cout << "*p : " << *p << endl;

	return 0;
}	

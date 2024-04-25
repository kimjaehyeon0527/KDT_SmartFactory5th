// 전처리기
#include <iostream>
#include <vector>
#include <string>

// #define ROW_SIZE = 5;

using namespace std;

int main() {
    // 동적 배열 할당 (vector) - 가변 요소 타입 : 모든 종류의 데이터 타입을 저장할 수 있다. (int, string)

    vector<vector<string>> Info = {
        {"이름", "나이", "국어", "수학" },
        {"방지턱", "19", "66", "68"},
        {"정직한", "20", "73", "94"},
        {"김가루", "19", "58", "37"},
        {"조나단", "20", "82", "29"}
    };

    // 배열 전체 출력
    cout << " **** 표 전체 보기 **** " << "\n\n";

    for (int i = 0; i < Info.size(); ++i) {
        for (int j = 0; j < Info[i].size(); ++j) {
            cout << Info[i][j] << "\t";
        }
        cout << endl;
    }

    // 사용자 나이 입력
    string age;

    cout << " \n 나이를 입력하세요 : ";

    cin >> age;

    cout << "\n";


    // 입력한 나이와 일치하는 정보 찾기

    bool find = false;

   for (int i = 0; i < Info.size(); ++i) {
        // 입력된 나이와 벡터의 나이를 비교
        if (age == Info[i][1]) { 
            cout << "이름: " << Info[i][0] << ", 수학 점수: " << Info[i][3] << endl;
            find = true;
            break;
        }
    }

   if (find == false) {
       cout << "데이터에 없는 나이 입니다." << endl;
   }



    return 0;
}   

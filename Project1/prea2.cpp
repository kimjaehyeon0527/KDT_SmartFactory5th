// ��ó����
#include <iostream>
#include <vector>
#include <string>

// #define ROW_SIZE = 5;

using namespace std;

int main() {
    // ���� �迭 �Ҵ� (vector) - ���� ��� Ÿ�� : ��� ������ ������ Ÿ���� ������ �� �ִ�. (int, string)

    vector<vector<string>> Info = {
        {"�̸�", "����", "����", "����" },
        {"������", "19", "66", "68"},
        {"������", "20", "73", "94"},
        {"�谡��", "19", "58", "37"},
        {"������", "20", "82", "29"}
    };

    // �迭 ��ü ���
    cout << " **** ǥ ��ü ���� **** " << "\n\n";

    for (int i = 0; i < Info.size(); ++i) {
        for (int j = 0; j < Info[i].size(); ++j) {
            cout << Info[i][j] << "\t";
        }
        cout << endl;
    }

    // ����� ���� �Է�
    string age;

    cout << " \n ���̸� �Է��ϼ��� : ";

    cin >> age;

    cout << "\n";


    // �Է��� ���̿� ��ġ�ϴ� ���� ã��

    bool find = false;

   for (int i = 0; i < Info.size(); ++i) {
        // �Էµ� ���̿� ������ ���̸� ��
        if (age == Info[i][1]) { 
            cout << "�̸�: " << Info[i][0] << ", ���� ����: " << Info[i][3] << endl;
            find = true;
            break;
        }
    }

   if (find == false) {
       cout << "�����Ϳ� ���� ���� �Դϴ�." << endl;
   }



    return 0;
}   

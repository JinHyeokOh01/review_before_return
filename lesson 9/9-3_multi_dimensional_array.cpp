//���� �迭��[��� ����][��� ����];
#include <iostream>
using namespace std;

int main() {
	const int sub = 2;
	const int num = 5;

	int test[sub][num];

	cout << "å�� ���õ� �� �Է�" << endl;

	for (int i = 0; i < sub; i++) {
		for (int j = 0; j < num; j++) {
			cin >> test[i][j];
		}
	}

	for (int k = 0; k < num; k++) {
		cout << k + 1 << "��° ����� ���� ������ " << test[0][k] << "�Դϴ�." << endl;
		cout << k + 1 << "��° ����� ��� ������ " << test[1][k] << "�Դϴ�." << endl;
	}
	

	/*range based for (�� ���� �̸� : �迭 �̸�) {
	}
	*/

	for (int a : test[0]) {
		cout << a << endl;
	}

}

/*
������ �迭�� �ʱ�ȭ
int test[2][5] = { {80, 60, 22, 50, 75}, {90, 55, 68, 72, 58} }
ù ��° ��� ���� ���� ����
*/
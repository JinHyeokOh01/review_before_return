//�迭�� �������� Ȯ���ϱ�
//������ �� = new ����[��� ����];
//delete[] ������ ��;

#include <iostream>
using namespace std;

int main() {
	int num;
	int* pT;

	cout << "�� ���� ���� ������ �Է��Ͻðڽ��ϱ�?" << endl;

	cin >> num;

	pT = new int[num];

	cout << num << "�� ���� ������ �Է��Ͻʽÿ�." << endl;

	for (int i = 0; i < num; i++) {
		cin >> pT[i];
	}

	for (int j = 0; j < num; j++) {
		cout << j + 1 << "��° ����� ������ " << pT[j] << "�Դϴ�." << endl;
	}

	delete[] pT;

	return 0;
}
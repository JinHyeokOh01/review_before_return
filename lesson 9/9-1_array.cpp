//���� ���� ���� ���ÿ� ���� �� ����ϱ�
//���� �迭��[��� ����];
//[] �ȿ� ��ȣ�� ÷��(�ε���, index)��� ��.

#include <iostream>
using namespace std;

int main() {
	//�迭 �ʱ�ȭ
	//int test[5] = { 80, 60, 22, 50, 75 };
	//or int test[] = { 80, 60, 22, 50, 75 };
	//{}�ȿ� �ۼ��� ���� �ʱ���(initializer)
	//�迭�� �ʱ�ȭ�ϸ� ����� ���ÿ� ���� ����ȴ�.

	const int num = 5; //���
	int test[num];

	cout << num << "���� ������ �Է��Ͻʽÿ�." << endl;

	for (int i = 0; i < num; i++)
		cin >> test[i];
	for (int j = 0; j < num; j++)
		cout << j + 1 << "��° ����� ������ " << test[j] << "�Դϴ�." << endl;
	return 0;
}
//���� ���� ������
#include <iostream>

using namespace std;

int main() {
	int a = 0;
	int b = 0;

	b = a++;
	cout << "���� �Ŀ� ���� �����ڸ� ��������Ƿ� b�� ���� " << b << "�Դϴ�.\n";
	cout << "a ����? " << a << "\n";

	b = 0;
	a = 0;
	cout << "�ʱ�ȭ\n";
	b = ++a;
	cout << "���� ���� ���� �����ڸ� ��������Ƿ� b�� ���� " << b << "�Դϴ�.\n";

	return 0;
}
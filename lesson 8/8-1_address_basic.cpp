#include <iostream>

using namespace std;

//�ּ� ������(address operator, &)
//������ ���� �޸��� '��� ��ġ'�� ����Ǿ� �ִ°�

int main() {
	int a = 0;

	a = 5;

	cout << "���� a�� ���� " << a << "�Դϴ�." << endl;
	cout << "���� a�� �ּҴ� " << &a << "�Դϴ�." << endl;

	return 0;
}
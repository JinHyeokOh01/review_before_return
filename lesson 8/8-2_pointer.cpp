//�ּҸ� �����ϴ� Ư���� ���� : ������(pointer)

//���� ���
// ����* �����͸�;

// �����Ϳ��� ��Ģ������ ������ ������ �ּҰ��� ������ �� ����.

#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int* pA = 0;

	a = 5;
	pA = &a;

	cout << a << endl;
	cout << &a << endl;
	cout << pA << endl;

}

//������ pA�� ���� a�� �ּҸ� �����ϱ�
//pA�� ���� a�� ����Ų��.
//pA(�� ��)�� ���� a(�� ��ġ)�� ����Ų��.
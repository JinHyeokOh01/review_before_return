//�����͸� ���� ������ ���� �������ϱ�
//������ �տ� * ������ ����. * ������ : ��������������(indirection operator)
// *������ ��;

#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int* pA = 0;
	a = 5;
	pA = &a;
	
	cout << "���� a�� ���� " << a << endl;
	cout << "���� a�� �ּҴ� " << &a << endl;
	cout << "������ pA�� ���� " << pA << endl;
	cout << "*pA�� ���� " << *pA << endl;

	return 0;
}
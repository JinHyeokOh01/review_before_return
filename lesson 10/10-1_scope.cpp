#include <iostream>
using namespace std;

void func();

int a = 0; //���� ����(global variable)


int main() {
	int b = 1; //���� ����(local variable)
	cout << "���� a�� " << a << endl;
	cout << "���� b�� " << b << endl;
	//cout << "���� c�� " << c << endl; // �ٸ� �Լ� ���� ���� ������ ����� �� ����.

	func();

	return 0;
}

void func() {
	int c = 2; //���� ����(local variable)

	cout << "func �Լ������� a�� c�� ����� �� �ֽ��ϴ�." << endl;
	cout << "���� a�� " << a << endl;
	// cout << "���� b�� " << b << endl; // �ٸ� �Լ� ���� ���� ������ ����� �� ����.
	cout << "���� c�� " << c << endl;
}
/*

���� ������ ���� ������ �̸��� ���Ƶ� �������.
int a = 0; //���� ���� a

int main()
{
	int a = 0; //���� ���� a
	a++; //���� ���� a�� ���� ����

	::a++; //���� ���� a�� ���� ����
	:: '���� �ذ� ������'


*/
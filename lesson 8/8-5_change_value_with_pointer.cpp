#include <iostream>
using namespace std;

int main() {
	int a = 0;
	int* pA = &a;

	a = 5;

	cout << "���� a�� ���� " << a << "�Դϴ�." << endl;

	*pA = 50;

	cout << "pA�� 50�� �����߽��ϴ�." << endl;
	cout << "���� a�� ���� " << a << "�Դϴ�." << endl;

	return 0;
}
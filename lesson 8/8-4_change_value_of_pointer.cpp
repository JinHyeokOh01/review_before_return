#include <iostream>
using namespace std;

int main() {
	int a = 5;
	int b = 10;
	int* pA = 0;

	pA = &a;

	cout << "���� a�� ���� " << a << "�Դϴ�." << endl;
	cout << "������ pA�� ���� " << pA << "�Դϴ�." << endl;
	cout << "*pA�� ���� " << *pA << "�Դϴ�." << endl;

	pA = &b;

	cout << "���� b�� ���� " << b << "�Դϴ�." << endl;
	cout << "������ pA�� ���� " << pA << "�Դϴ�." << endl;
	cout << "*pA�� ���� " << *pA << "�Դϴ�." << endl;
	return 0;
}
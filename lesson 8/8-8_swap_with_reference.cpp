#include <iostream>
using namespace std;

void swap(int& x, int& y);

int main() {
	int num1 = 5;
	int num2 = 10;

	cout << "���� num1�� ���� " << num1 << endl;
	cout << "���� num2�� ���� " << num2 << endl;

	swap(num1, num2);
	cout << "�ٲ� num1 " << num1 << endl;
	cout << "�ٲ� num2 " << num2 << endl;

	return 0;

}

//���μ��� const ���̸� ���μ� �� �� �ٲ��.

void swap(int& x, int& y) {
	int temp = 0;
	temp = x;
	x = y;
	y = temp;
}
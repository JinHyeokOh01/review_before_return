#include <iostream>
#include "10-6_my_func.h"
using namespace std;

int main() {
	int num1, num2, num3;

	cout << "ù ��° ���� �Է� : ";
	cin >> num1;
	cout << "�� ��° ���� �Է� : ";
	cin >> num2;

	num3 = max(num1, num2);
	cout << "�ִ��� " << num3 << "�Դϴ�." << endl;

	return 0;
}

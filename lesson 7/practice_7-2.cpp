//7�� 2�� ����
//1�� �ڵ��� double�� ���� �����ϴ� �Լ� double square(double x)�� �߰��Ͻʽÿ�.

#include <iostream>

using namespace std;

int square(int x);
double square(double x);

int main() {
	int num1 = 0;
	double num2 = 0;
	cout << "������ �Է��Ͻʽÿ�." << endl;
	cin >> num1;
	cout << num1 << "�� ������ " << square(num1) << "�Դϴ�." << endl;

	cout << "�Ҽ��� �Է��Ͻʽÿ�." << endl;
	cin >> num2;
	cout << num2 << "�� ������ " << square(num2) << "�Դϴ�." << endl;

	return 0;
}

int square(int x) {
	return x * x;
}

double square(double x) {
	return x * x;
}
//7�� 4�� ����
//�־��� ���� ���ڸ� �����ϴ� �Լ� ���ø� template <class T>T square(T x)�� �ۼ��Ͻʽÿ�.

#include <iostream>
using namespace std;

template <class T>
T square(T x) {
	return x * x;
}

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
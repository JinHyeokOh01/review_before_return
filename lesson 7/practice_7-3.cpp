//7�� 3�� ����
//2�� ������ �ڵ��� �Լ� �� ���� �ζ��� �Լ��� ����ʽÿ�.

#include <iostream>

using namespace std;

inline int square(int x) { return x * x; }
inline double square(double x) { return x * x; }


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
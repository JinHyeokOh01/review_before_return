#include <iostream>

using namespace std;

inline int max(int x, int y) { if (x > y) return x; else return y;}

int main() {
	int num1 = 0, num2 = 0;

	cout << "ù ��° ���� �Է�" << endl;
	cin >> num1;
	cout << "�� ��° ���� �Է�" << endl;
	cin >> num2;

	cout << "�ִ��� " << max(num1, num2) << "�Դϴ�.";

	return 0;
}
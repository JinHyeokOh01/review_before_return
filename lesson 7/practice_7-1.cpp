//7�� 1�� ����
//int �� ���ڸ� ������ ���� ��ȯ�ϴ� �Լ� int square(int x)�� �ۼ��Ͻÿ�.

#include <iostream>

using namespace std;

int square(int x) {
	return x*x;
}

int main() {
	int num = 0;
	cout << "������ �Է��Ͻʽÿ�." << endl;
	cin >> num;
	cout << num << "�� ������ " << square(num) << "�Դϴ�." << endl;

	return 0;
}
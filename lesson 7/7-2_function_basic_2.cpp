#include <iostream>
using namespace std;

void buy(int x, int y) {
	cout << x << "�� ��¥��, " << y << "�� ��¥�� ������ �����߽��ϴ�." << endl;
}

int main() {
	int num1 = 0, num2 = 0;

	cout << "�����Ͻô� ������ ������ ���Դϱ�?" << endl;
	cin >> num1;
	cout << "�����Ͻô� ������ ������ ���Դϱ�?" << endl;
	cin >> num2;

	buy(num1, num2);
	return 0;	
}
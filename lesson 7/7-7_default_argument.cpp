#include <iostream>
using namespace std;

void buy(int x = 10);

int main() {
	cout << "ó�� ���Ű��� 100����" << endl;
	buy(100);

	cout << "�� ��° ���Ű��� �⺻��" << endl;
	buy();

	return 0;
}

void buy(int x) {
	cout << x << "�� ��¥�� ������ �����߽��ϴ�." << endl;
}
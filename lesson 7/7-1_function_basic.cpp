#include <iostream>
using namespace std;

//buy �Լ��� ����
void buy(int x) {
	cout << x << "�� �� ¥�� ������ �����߽��ϴ�." << endl;
}

//buy �Լ��� ȣ��
int main() {
	int num = 0;

	cout << "ù ��° ������ ���Դϱ�?" << endl;
	cin >> num;
	buy(num);
	//pass by value

	cout << "�� ��° ������ ���Դϱ�?" << endl;
	cin >> num;
	buy(num);

	return 0;
}

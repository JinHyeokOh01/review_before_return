#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

int main() {
	Car car1 = { 1234, 25.5 };
	Car car2 = { 4567, 52.2 };

	cout << "car1�� ���� ��ȣ�� " << car1.num << " ������ ���� " << car1.gas << "�Դϴ�." << endl;
	cout << "car2�� ���� ��ȣ�� " << car2.num << " ������ ���� " << car2.gas << "�Դϴ�." << endl;

	car2 = car1;

	cout << "car1�� car2�� �����߽��ϴ�." << endl;

	cout << "car2�� ���� ��ȣ�� " << car2.num << " ���ᷮ�� " << car2.gas << "�Դϴ�." << endl;

	return 0;
}
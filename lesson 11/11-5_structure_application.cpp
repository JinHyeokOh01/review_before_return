#include <iostream>
using namespace std;

struct Car {
	int num;
	double gas;
};

void show(Car c);

int main() {
	Car car1 = { 0, 0.0 };

	cout << "���� ��ȣ�� �Է��Ͻʽÿ�." << endl;
	cin >> car1.num;

	cout << "���ᷮ�� �Է��Ͻʽÿ�." << endl;
	cin >> car1.gas;

	show(car1);

	return 0;
}

void show(Car c) {
	cout << "���� ��ȣ�� " << c.num << " ������ ���� " << c.gas << " �Դϴ�." << endl;
}
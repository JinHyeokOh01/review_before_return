//�Լ� ���ø��� �����ϰ� �����Ѵ�.
//�Լ��� ȣ���Ѵ�(�Լ��� �ڵ����� ���������.)

//�ٷ�� ���� ������ �ٸ� ��Ұ� ������ ������ �Լ��� �� �ѹ��� ������ �� �ִ�.
//������(polymorphism) : �ϳ��� �̸��� ��Ȳ�� ���߾� �ٸ� ����� ������ ��

#include <iostream>

using namespace std;

template <class T>
T maxt(T x, T y) {
	if (x > y)
		return x;
	else
		return y;
}

int main() {
	int a = 0, b = 0;
	double da = 0, db = 0;

	cout << "���� 2�� �Է�" << endl;
	cin >> a >> b;
	cout << "�Ҽ� 2�� �Է�" << endl;
	cin >> da >> db;

	cout << "���� �ִ��� " << max(a, b) << "�Դϴ�." << endl;
	cout << "�Ҽ� �ִ��� " << max(da, db) << "�Դϴ�." << endl;

	return 0;
}
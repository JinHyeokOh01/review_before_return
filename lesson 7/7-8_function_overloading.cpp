//�μ��� ���� �� ���� �ٸ��鼭 �̸��� ���� �Լ��� ���� �� �����ϴ� ����
//�Լ��� �����ε�(�ߺ�����)

#include <iostream>
using namespace std;

int max(int x, int y);
double max(double x, double y);

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

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}

double max(double x, double y) {
	if (x > y)
		return x;
	else
		return y;
}

//�����ε� ��� �� ������
//�����ε��� �Լ��� �μ��� ���¿� ������ ������ ����� �Լ��� �޶�� �Ѵ�.
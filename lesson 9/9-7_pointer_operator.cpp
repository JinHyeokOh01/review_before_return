//�����Ϳ� []������ ����ϱ�
//�����Ϳ� []�� ����Ͽ� �迭ó�� ǥ���ϱ�
#include <iostream>

using namespace std;

double avg(int* t);

int main() {
	int test[5];

	cout << "5���� ���� ������ �Է��Ͻʽÿ�." << endl;
	for (int i = 0; i < 5; i++) {
		cin >> test[i];
	}
	double ans = avg(test);
	cout << "5���� ��� ������ " << ans << "���Դϴ�." << endl;

	return 0;
}

double avg(int* t) {
	double sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += t[i];
	}
	return sum / 5;
}
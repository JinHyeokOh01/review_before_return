#include <iostream>
using namespace std;

/*
int main() {
	for (int i = 1; i <= 5; i++) {
		cout << "�ݺ��ϰ� �ֽ��ϴ�." << endl;
	}
	cout << "�ݺ� ����" << endl;
	return 0;
}
*/

int main() {
	int num = 0;
	cout << "�� ���� *�� ����Ͻðڽ��ϱ�?" << endl;
	cin >> num;

	for (int i = 1; i <= num; i++) {
		cout << '*';
	}
	cout << endl;
	return 0;
}
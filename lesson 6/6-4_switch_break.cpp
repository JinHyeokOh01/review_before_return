#include <iostream>
using namespace std;

int main() {
	int res = 0;
	cout << "������ �Է��Ͻʽÿ�. (1-5)" << endl;
	cin >> res;

	switch (res) {
	case 1:
	case 2:
		cout << "���� �� ����սô�." << endl;
		break;
	case 3:
	case 4:
		cout << "�� ���̽��� �� ����սô�." << endl;
		break;
	case 5:
		cout << "�ſ� ����մϴ�." << endl;
		break;
	default:
		cout << "1���� 5������ ������ �Է��Ͻʽÿ�." << endl;
		break;
	}
	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int res = 0;
	cout << "������ �Է��Ͻʽÿ�." << endl;

	cin >> res;

	switch (res) {
	case 1:
		cout << "1�� �ԷµǾ����ϴ�." << endl;
		break;
	case 2:
		cout << "2�� �ԷµǾ����ϴ�." << endl;
		break;
	default:
		cout << "1 �Ǵ� 2�� �Է��Ͻʽÿ�" << endl;
		break;
	}

	return 0;
}
#include <iostream>
using namespace std;

int main() {
	int res = 0;
	char ans = 0;

	cout << "�� ��° �ڽ��� �����Ͻðڽ��ϱ�?" << endl;
	cout << "������ �Է��Ͻʽÿ�." << endl;

	cin >> res;
	/*
	if (res == 1)
		ans = 'A';
	else
		ans = 'B';
	*/

	ans = (res == 1) ? 'A' : 'B';

	cout << ans << "�ڽ��� �����߽��ϴ�." << endl;

	return 0;
}
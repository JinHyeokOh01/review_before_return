#include <iostream>
using namespace std;

int main() {
	char res = 0;
	cout << "����� �����Դϱ�?" << endl;
	cout << "Y �Ǵ� N�� �Է��Ͻʽÿ�." << endl;

	cin >> res;

	if (res == 'Y' || res == 'y')
		cout << "����� �����̱���." << endl;
	else if (res == 'N' || res == 'n')
		cout << "����� �����̱���." << endl;
	else
		cout << "Y �Ǵ� N�� �Է��Ͻʽÿ�." << endl;
	return 0;
}
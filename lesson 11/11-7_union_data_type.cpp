#include <iostream>
using namespace std;

union Year {
	int ad;
	int dangi;
};

int main() {
	Year myyear;

	cout << "���⸦ �Է��Ͻʽÿ�." << endl;
	cin >> myyear.ad;

	cout << "���� " << myyear.ad << " ���Դϴ�." << endl;
	cout << "�ܱ� " << myyear.dangi << " ���Դϴ�." << endl;

	return 0;

}

//����ü���� �� �ϳ��� ���� ������ �� �ִ�.
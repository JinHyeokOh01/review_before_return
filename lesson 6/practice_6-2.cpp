//6�� 2�� ����
//Ű����� ���� ������ �Է¹��� ��, �� �հ踦 ����ϴ� �ڵ带 �ۼ��Ͻʽÿ�. 0�� �Է¹����� ����� ��¹޵��� �մϴ�.
/*
���� ������ �Է��Ͻʽÿ�. (0���� ����)
52(�Է�)
68(�Է�)
75(�Է�)
83(�Է�)
36(�Է�)
0
���� ������ �հ�� 314�� �Դϴ�.
*/

#include <iostream>
using namespace std;

int main() {
	int num = 1, sum = 0;
	cout << "���� ������ �Է��Ͻʽÿ�. (0 �Է½� ����)" << endl;
	while (num) {
		cin >> num;
		sum += num;
	}
	cout << "���� ������ �հ�� " << sum << "�� �Դϴ�." << endl;

	return 0;
}
//4�� 3�� ����
//Ű����� �ټ� ������ ���� ������ �Է¹��� ��, ������ ���� �հ�� ����� ����ϴ� �ڵ带 �ۼ��Ͻʽÿ�.

#include <iostream>
using namespace std;

int main() {
	double input = 0;
	double sum = 0;
	double avg = 0;

	cout << "���� 1�� ������ �Է��Ͻʽÿ�." << endl;
	cin >> input;
	sum += input;
	cout << "���� 2�� ������ �Է��Ͻʽÿ�." << endl;
	cin >> input;
	sum += input;
	cout << "���� 3�� ������ �Է��Ͻʽÿ�." << endl;
	cin >> input;
	sum += input;
	cout << "���� 4�� ������ �Է��Ͻʽÿ�." << endl;
	cin >> input;
	sum += input;
	cout << "���� 5�� ������ �Է��Ͻʽÿ�." << endl;
	cin >> input;
	sum += input;
	avg = sum / 5;

	cout << "5������ �հ�� " << sum << " ���Դϴ�." << endl;
	cout << "5������ ����� " << avg << " ���Դϴ�." << endl;

	return 0;

}
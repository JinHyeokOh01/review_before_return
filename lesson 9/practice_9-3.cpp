//9�� 3�� ����
//���ڿ� �ȿ��� Ư�� ������ ���� Ƚ���� �˾Ƴ��� �Լ� int count(char str[], char ch)�� �ۼ��Ͻʽÿ�.

#include <iostream>
using namespace std;

int count(char str[], char ch);

int main() {
	char c[100];
	char search;
	cout << "���ڿ��� �Է��Ͻʽÿ�." << endl;
	cin >> c;
	cout << "���ڿ����� �˻��� ���ڸ� �Է��Ͻʽÿ�." << endl;
	cin >> search;
	cout << c << " �ȿ� " << search << "�� �� " << count(c, search) << "�� �ֽ��ϴ�." << endl;
	return 0;
}

int count(char str[], char ch) {
	int num = 0;
	int ch_count = 0;
	while (str[num] != '\0') {
		if (str[num] == ch)
			ch_count++;
		num++;
	}
	return ch_count;
}
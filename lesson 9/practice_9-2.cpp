//9�� 2�� ����
//���ڿ��� ���̸� �˾Ƴ��� �Լ� int length(char* str)�� �ۼ��Ͻʽÿ�.
//������ Ű����� �Է¹��� ���ڿ��� ���̸� �˾Ƴ��� �ڵ带 �ۼ��Ͻʽÿ�.

#include <iostream>
using namespace std;

int length(char* str);

int main() {
	char ch[100];

	cout << "���ڿ��� �Է��Ͻʽÿ�." << endl;
	cin >> ch;
	cout << "���ڿ��� ���̴� " << length(ch) << "�Դϴ�.";
	return 0;
}

int length(char* str) {
	int count = 0;
	while (str[count])
		count++;
	return count;
}
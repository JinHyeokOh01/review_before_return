//���ڿ��� �迭�� �����ϱ�
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char str0[20];
	char str1[10];
	char str2[10];

	strcpy(str1, "Hello");
	strcpy(str2, "Goodbye");
	strcpy(str0, str1); //str0[]�� str1[] ����
	strcat(str0, str2); //str0[]�� ���� str2[]�� �߰�

	cout << "�迭 str1 : " << str1 << endl;
	cout << "�迭 str2 : " << str2 << endl;

	return 0;

}
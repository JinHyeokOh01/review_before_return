//문자열을 배열에 복사하기
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
	strcpy(str0, str1); //str0[]에 str1[] 복사
	strcat(str0, str2); //str0[]의 끝에 str2[]를 추가

	cout << "배열 str1 : " << str1 << endl;
	cout << "배열 str2 : " << str2 << endl;

	return 0;

}
//9장 3번 문제
//문자열 안에서 특정 문자의 등장 횟수를 알아내는 함수 int count(char str[], char ch)를 작성하십시오.

#include <iostream>
using namespace std;

int count(char str[], char ch);

int main() {
	char c[100];
	char search;
	cout << "문자열을 입력하십시오." << endl;
	cin >> c;
	cout << "문자열에서 검색할 문자를 입력하십시오." << endl;
	cin >> search;
	cout << c << " 안에 " << search << "은 총 " << count(c, search) << "개 있습니다." << endl;
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